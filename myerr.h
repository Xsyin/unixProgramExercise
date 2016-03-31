/*************************************************************************
	> File Name: myerr.h
	> Author: yin
	> Mail: 943675853@qq.com
	> Created Time: 2016年03月19日 星期六 10时17分20秒
 ************************************************************************/
#ifndef _MYERR_H_
#define _MYERR_H_

#define MAXLINE 4096
void err_msg(const char *, ...);
void err_dump(const char *, ...) __attribute__((noreturn));
void err_quit(const char *, ...) __attribute__((noreturn));
void err_cont(int, const char *, ...);
void err_exit(int, const char *, ...) __attribute__((noreturn));
void err_ret(const char *, ...);
void err_sys(const char *, ...) __attribute__((noreturn));

#endif
