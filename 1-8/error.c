/*************************************************************************
	> File Name: error.c
	> Author: yin
	> Mail: 943675853@qq.com
	> Created Time: 2016年04月01日 星期五 15时13分55秒
 ************************************************************************/

#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char *argv[])
{
	fprintf(stderr, "EACCES: %s\n", strerror(EACCES));
	errno = ENOENT;
	perror(argv[0]);
	exit(0);
}
