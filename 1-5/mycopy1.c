/*************************************************************************
	> File Name: mycopy1.c
	> Author: yin
	> Mail: 943675853@qq.com
	> Created Time: 2016年03月19日 星期六 20时01分21秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "myerr.h"

int main(void)
{
	int c;
	while((c = getc(stdin)) != EOF)
		if(putc(c,stdout) == EOF)
			err_sys("output error");

	if(ferror(stdin))
		err_sys("input error");

	return 0;
}
