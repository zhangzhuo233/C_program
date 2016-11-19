#include"test.h"
int pfun(int a, int b, Pfun fun)
{
    return fun(a,b);
}
int Add(int a, int b)
{
     return a+b;
}
Pra fun2_Add(int (*mat)[2], int (*mab)[2], int (*mac)[2])
{
    for(int i=0; i<2; ++i)
    {
        for(int j=0; j<2; ++j)
        {
            *(*(mac+i)+j) = *(*(mat+i)+j) + *(*(mab+i)+j);
        }
    }
    return mac;
}
