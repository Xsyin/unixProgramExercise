/*************************************************************************
	> File Name: myls.c
	> Author: yin
	> Mail: 943675853@qq.com
	> Created Time: 2016年03月19日 星期六 09时46分09秒
 ************************************************************************/
#include <stdio.h>
#include <dirent.h>
#include <stdarg.h>
#include "myerr.h"

int main(int argc, char *argv[])
{
	DIR *dp;
	struct dirent *dirp;
	if(argc != 2)
		err_quit("Usage: ls directory_name");
	if((dp = opendir(argv[1])) == NULL)
		err_sys("Can't open %s",argv[1]);
	while((dirp = readdir(dp)) != NULL)
		printf("%s\n",dirp->d_name);
}

