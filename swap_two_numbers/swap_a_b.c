/*程序功能：交换两个数的正确展示
**时间：2016-10-30-10：42
*/
#include<stdio.h>
void swap(int*, int*);
void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
int main(int argc, char const* argv[])
{
    int a,b;
    printf("please input value a,b:\n");
    scanf("%d,%d", &a, &b);
    printf("Before swap,the value a,b:%d,%d\n", a, b);
    swap(&a, &b);
    printf("After swap,the value a,b:%d,%d\n", a, b);
    return 0;
}
