#include <stdio.h>

int main(void)
{
    int l;
    printf("正方形の辺の長さを入力してください．\n");
    scanf("%d", &l);
    printf("正方形の面積は%dです.\n", l*l);

    return 0;
}