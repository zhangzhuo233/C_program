#ifndef _SELECT_H_
#define _SELECT_H_
#include<stdio.h>
int Max(int, int);
int Min(int, int);
int (*pfun)(int, int);
int Exe(int, int, int (*pfun)(int, int));

#endif/*Select.h*/
