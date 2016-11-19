/*程序功能：将一个一维数组进行简单的排序
**时间:Oct 27 12:27
*/
#include"Sort.h"

int main(int argc, char const* argv[])
{
    int n;
    printf("数组元素的个数:\n");
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; ++i)
    {
        printf("下标为%d的元素:\n", i);
        scanf("%d", &a[i]);
    }
    //数组元素个数的求法sizeof(a)/sizeof(int)
    n = sizeof(a)/sizeof(int);
    printf("排序前:");
    Show_array(a, n);
    Sort(a, n);
    printf("排序后:");
    Show_array(a, n);
    return 0;
}
