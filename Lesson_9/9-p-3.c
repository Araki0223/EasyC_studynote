#include <stdio.h>

void add(int *x1, int *x2, int a);

int main(void)
{
    // int num1=0, num2=0, N=0;
    int num1, num2, N;

    printf("２科目分の点数を入力してください.\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("加算する点数を入力してください.\n");
    scanf("%d", &N);

    add(&num1, &num2, N);

    printf("科目１は%d点となりました.\n", num1);
    printf("科目２は%d点となりました.\n", num2);

    return 0;
}

void add(int *x1, int *x2, int a)
{
    *x1 += a;
    *x2 += a;
}