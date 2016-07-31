#ifndef __APUE_H__
#define	__APUE_H__

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>

#define		MAXLINE		(4096)

void err_ret(const char *, ...);
void err_sys(const char *, ...) __attribute__((noreturn));
void err_quit(const char *, ...) __attribute__((noreturn));
#endif

