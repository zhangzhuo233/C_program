#include<stdio.h>
#include"bool.h"

bool lsee(int year)
{
    if((year%4==0 && year%100!=0) || year%400==0)
    {
        return TRUE;
    }
    else
    {
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
            day = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            day = 30;
            break;
        case 2:
            if(lsee(y))
            {
                 day = 29;
                 printf("是闰年\n");
            }
            else
            {
                 day = 28;
                 printf("是平年\n");
            }
            break;
        default:
            printf("ERROR");

    }
    printf("day：%d\n", day);
    return 0;
}
