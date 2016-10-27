#include"Sort.h"

void Show_array(int ar[], int len)
{
    for(int j=0; j<len; ++j)
    {
        printf("%d\t", ar[j]);
    }
    printf("\n");
}
void Sort(int ar[], int len)
{
    for(int k=0; k<len; ++k)
    {
         for(int m=0; m<len-1-k; ++m)
         {
             if(ar[m] < ar[m+1])
             {
                int tmp = ar[m];
                ar[m] = ar[m+1];
                ar[m+1] = tmp;
             }
         }
    }

}
