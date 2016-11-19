/*程序名:利用数组指针/函数指针
 * 功能:将两个二维数组进行相加并且输出
 *程序员:张卓
 *时间2016-11-19-20:25
 */
#include"test.h"
int main(int argc, char const* argv[])
{
    int ar[2][2] = {1,2,3,4};
    int br[2][2] = {2,3,4,5};
    int cr[2][2] = {0};
    int (*pa)[2] = ar;
    int (*pb)[2] = br;
    int (*pc)[2] = cr;
#if 0
    int b = pfun(ar[0][0],br[0][0], &Add);
    printf("%d\n", b);
#endif
    fun2_Add(pa, pb, pc);
    for(int m=0; m<2; ++m)
    {
        for(int n=0; n<2; ++n)
        {
            printf("%d\t", *(*(pc+m)+n));
        }
        printf("\n");
    }
    return 0;
}
