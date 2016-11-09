#include<stdio.h>

enum OPT
{
    QUIT,
    ADD,
    SUB,
    MUL,
    DIV
};
int main(int argc, char const* argv[])
{
    int Select = 1;
    int a;
    int b;
    while(Select)
    {
        printf("***********************************\n");
        printf("******(1)Add       (2)Sub  ********\n");
        printf("******(3)Mul       (4)Div  ********\n");
        printf("******   (0)Quit system    ********\n");
        printf("***********************************\n");
        printf("Select>");
        scanf("%d", &Select);
        if(Select == 0)
        {
            return 0;
        }
        printf("Your oprand,such as a,b>");
        scanf("%d,%d", &a, &b);
        switch(Select)
        {
            case ADD:
                printf("result:%d\n", a+b);
                break;
            case SUB:
                printf("result:%d\n", a-b);
                break;
            case MUL:
                printf("result:%d\n", a*b);
                break;
            case DIV:
                if(b)
                {
                    printf("result:%d\n", a/b);
                }
                else
                {
                     printf("Please ensure divisor correct!Error!\n");
                }
                break;
            default:
                printf("Misopration!Error!");
                break;
        }

    }
    return 0;
}
