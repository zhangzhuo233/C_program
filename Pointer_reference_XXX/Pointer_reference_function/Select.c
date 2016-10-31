#include"Select.h"

int Max(int x, int y)
{
    return x>y?x:y;
}

int Min(int x, int y)
{
    return x<y?x:y;
}

int Exe(int x, int y, int (*pfun)(int, int))
{
    return pfun(x,y);
}
