#include <stdio.h>

int main(void)
{
    int a;
    int *pA;

    a = 5;
    pA = &a;

    printf("変数aの値は%dです.\n", a);
    printf("変数Aのアドレスは%pです.\n", &a);
    printf("ポインタpAの値は%pです.\n", pA);
    printf("*pAの値は%dです.\n", *pA);

    return 0;
}