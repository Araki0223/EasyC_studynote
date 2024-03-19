#include <stdio.h>

int main(void)
{
    int sub1, sub2, sub3, sub4, sub5;

    printf("科目1の点数を入力してください.\n");
    scanf("%d", &sub1);

    printf("科目2の点数を入力してください.\n");
    scanf("%d", &sub2);

    printf("科目3の点数を入力してください.\n");
    scanf("%d", &sub3);

    printf("科目4の点数を入力してください.\n");
    scanf("%d", &sub4);

    printf("科目5の点数を入力してください.\n");
    scanf("%d", &sub5);

    int total = sub1 + sub2 + sub3 + sub4 + sub5;
    double average = total / 5.0;

    printf("5教科の合計点は%d点です.\n", total);
    printf("5教科の平均点は%f点です.\n", average);

    return 0;
}