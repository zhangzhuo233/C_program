/*程序功能：交换两个数的错误展示
**时间：2016-10-30-10：42
*/
#include<stdio.h>

void swap(int, int);
void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
int main(int argc, char const* argv[])
{
    int a,b;
    printf("please input value a,b:\n");
    scanf("%d,%d", &a, &b);
    printf("Before swap,the value a,b:%d,%d\n", a, b);
    swap(a, b);
    printf("After swap,the value a,b:%d,%d\n", a, b);
    return 0;
}

/* When the code runned, the value of a and b not be changed!!!
 * Because in swap function, the address of a and b are different from a and b of swap(a, b).
 * So, if you want  to change  formal parameter by actual parameter,you can not pass by value,you should pass by address.
 * */
