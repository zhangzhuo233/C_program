/*程序功能：实现realloc函数
**时间：2016-11-7-09：07
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void *my_realloc(void *ptr, size_t size);
void *my_realloc(void *ptr, size_t size)
{
    void *new_ptr = malloc(size);
    if(!new_ptr)
    {
        printf("malloc fail.\n");
        exit(1);
    }
    memcpy(new_ptr, ptr, size);
    free(ptr);
    ptr = new_ptr;
    return ptr;

}

int main(int argc, char const* argv[])
{
    int *p = (int *)malloc(sizeof(int) * 5);
    if(!p)
    {
        printf("malloc fail.\n");
        exit(1);
    }
    for(int i=0; i<5; ++i)                  //不要使用++p,到下面的realloc会出现段错误//调试了一早上得到的结论
    {
        p[i] = i+1;
        printf("%d\t", p[i]);
    }
    printf("\n");

    p = (int *)my_realloc(p, sizeof(int) * 10);
    if(!p)
    {
        printf("realloc fail.\n");
        exit(1);
    }
    for(int i=0; i<10; ++i)
    {
        p[i] = i+1;
        printf("%d\t", p[i]);
    }
    printf("\n");
    free(p);
    return 0;
}
