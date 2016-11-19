/*程序功能：打印乘法表
**时间：2016-10-25-10：42
*/
#include<stdio.h>
int main(int argc, char const* argv[])
{
    for(int i=1; i<=9; ++i)
    {
        for(int j=1; j<=i; ++j)
        {
            printf("%d*%d=%d ", j, i, j*i);
        }
        printf("\n");
    }
    return 0;
}
