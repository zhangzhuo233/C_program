#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const* argv[])
{
    int pos;
    int value;
    /*向m.txt写入数据*/
    int ar[6] = {12,34,56,78,90,100};
    FILE *fp = NULL;
    fp = fopen("m.txt", "wb");
    if(NULL == fp)
    {
        printf("Open file error!\n");
        EXIT_FAILURE;
    }
    fwrite(ar,sizeof(int),6,fp);
    fclose(fp);
    /*输出想要位置出的数据*/
    FILE *fpr = NULL;
    fpr = fopen("m.txt", "rb");
    if(NULL == fpr)
    {
        printf("Open file error!\n");
        EXIT_FAILURE;
    }
    while(1)
    {
         printf("pos>");
         scanf("%d", &pos);
         fseek(fpr,pos*4,SEEK_SET);
         if(!feof(fpr))
         {
              fread(&value,sizeof(int),1,fpr);
              if(pos>=6)
              {
                  printf("Over the file!\n");
                  break;
              }
              printf("value>%d\n", value);
         }
    }
    fclose(fpr);
    return 0;
}
/*
 * 输出结果
 *
 * [root@fundation10 22文件操作随机读写]# ./stochastic
 * pos>0
 * value>12
 * pos>1
 * value>34
 * pos>2
 * value>56
 * pos>3
 * value>78
 * pos>4
 * value>90
 * pos>5
 * value>100
 * pos>6
 * Over the file!
 */
