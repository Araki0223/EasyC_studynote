#include <stdio.h>

int main(void)
{
    int num, sum;

    printf("テストの点数を入力してください.\n");

    while(num){
        scanf("%d", &num);
        sum += num;
    }

    printf("テストの合計点は%dです.\n", sum);

    return 0;
}