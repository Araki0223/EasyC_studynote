#include <stdio.h>

int main(void)
{
    int a = 5;
    int *pA = &a; // ポインタの宣言と代入を同時にやっている

    printf("ポインタpAの値は%pです.\n", pA);
    printf("*pAの値は%dです.\n", *pA);

    return 0;
}