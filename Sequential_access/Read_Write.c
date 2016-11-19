/*程序功能：顺序读写代码展示--将一张图片进行读写拷贝
**时间：Nov 14 12:37 
*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const* argv[])
{
    FILE *fpIn = NULL;
    FILE *fpOut = NULL;
    fpIn = fopen("1.jpg", "rb");
    if(NULL == fpIn)
    {
        printf("Open Input file error!\n");
        EXIT_FAILURE;
    }
    fpOut = fopen("2.jpg", "wb");
    if(NULL == fpOut)
    {
        printf("Open Output file error!\n");
        EXIT_FAILURE;
    }
    char buffer[95765];
    while(!feof(fpIn))
    {
        fread(buffer, sizeof(char), 95765, fpIn);
        fwrite(buffer, sizeof(char), 95765, fpOut);
    }
    fclose(fpIn);
    fclose(fpOut);
    return 0;
}
