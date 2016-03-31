/*************************************************************************
	> File Name: getpid.c
	> Author: yin
	> Mail: 943675853@qq.com
	> Created Time: 2016年03月19日 星期六 20时10分21秒
 ************************************************************************/

#include<stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(void)
{
	printf("Hello from process ID %ld\n", (long)getpid());
	exit(0);
}
