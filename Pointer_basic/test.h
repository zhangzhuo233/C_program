#ifndef _TEST_H_
#define _TEST_H_

#include<stdio.h>
typedef int (*Pfun)(int,int);
typedef int (*Pra)[2];
int pfun(int , int, Pfun fun);
int Add(int a,int b);
Pra fun2_Add(int (*mat)[2], int (*mab)[2], int (*mac)[2]);
#endif
