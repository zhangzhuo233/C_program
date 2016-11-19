/*程序功能：指针引用数组实例及方法展示
**时间：Oct 31 12:25
*/
#include<stdio.h>

void Show(int *, int);
void Show(int *b, int n)
{
    for(int m=0; m<n; ++m)
    {
        printf("%d\t", b[m]);
    }
    printf("\n");
}
void Show2(int c[], int);
void Show2(int c[], int n)
{
    for(int m=0; m<n; ++m)
    {
        printf("%d\t", c[m]);
    }
    printf("\n");
}

int main(int argc, char const* argv[])
{
    int a[] = {1,2,3,4,5,6};
    int len = sizeof(a)/sizeof(int);
    int *p = a;
    int *p2= a;
    //指针引用数组方法1
    for(int i=0; i<len; ++i)
    {
        printf("%d\t", *(a+i));
    }
    printf("\n");
    //指针引用数组方法2
    for(int i=0; i<len; ++i)
    {
        printf("%d\t", *(p+i));
    }
    printf("\n");
    //指针引用数组方法3
    for(; p2<(a+len); ++p2)
    {
        printf("%d\t", *p2);
    }
    printf("\n");
    //利用Show函数打印输出，数组在形参中退化成指针
    Show(a, len);
    Show2(a, len);
    return 0;
}

