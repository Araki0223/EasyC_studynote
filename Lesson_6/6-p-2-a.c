#include <stdio.h>

int main(void)
{
    int num, sum;

    printf("テストの点数を入力してください.(0で終了)\n");

    do{
        scanf("%d", &num);
        sum += num;
    }while(num);

    printf("テストの合計点は%dです.\n", sum);

    return 0;
}