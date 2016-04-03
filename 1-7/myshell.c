/*************************************************************************
	> File Name: myshell.c
	> Author: yin
	> Mail: 943675853@qq.com
	> Created Time: 2016年03月19日 星期六 20时48分54秒
 ************************************************************************/

#include<stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "myerr.h"

int main(void)
{
	char buf[MAXLINE];
	pid_t pid;
	int status;

	printf("%% ");
	while(fgets(buf, MAXLINE, stdin) != NULL){
		if(buf[strlen(buf) - 1] == '\n')
			buf[strlen(buf) - 1] = 0;

		if((pid = fork()) < 0){
			err_sys("fork error");
		}else if(pid == 0){
			execlp(buf, buf, (char *)0);
			err_ret("couldn't execute %s", buf);
			exit(127);
		}

		if((pid = waitpid(pid, &status, 0)) < 0)
			err_sys("waitpid error");
		printf("%% ");
	}
	exit(0);
}
