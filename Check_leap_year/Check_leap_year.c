/*程序功能：输入年和月，检测是否是闰年，输出某月有多少天
**时间:2016-10-27-12:32
*/
#include<stdio.h>
#include"bool.h"

bool lsee(int year)
{
    if((year%4==0 && year%100!=0) || year%400==0)
    {
        printf("是闰年\n");
        return TRUE;
    }
    else
    {
        printf("是平年\n");
        return FALSE;
    }
}


int main(int argc, char const* argv[])
{
    int y;
    int day;
    int month;
    printf("plese input year , month\n");
    scanf("%d,%d", &y,&month);
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            lsee(y);
            day = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            lsee(y);
            day = 30;
            break;
        case 2:
            if(lsee(y))
            {
                 day = 29;
            }
            else
            {
                 day = 28;
            }
            break;
        default:
            printf("ERROR");

    }
    printf("day：%d\n", day);
    return 0;
}
