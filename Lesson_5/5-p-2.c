#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("2つの整数を入力してください.\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 == num2){
        printf("2つの数は同じ値です.\n");
    }
    else if (num1 > num2){
        printf("%dより%dの方が大きい値です.\n", num2, num1);
    }
    else if (num1 < num2){
        printf("%dより%dの方が大きい値です.\n", num1, num2);
    }

    return 0;
}