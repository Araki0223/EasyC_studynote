#include <stdio.h>

int main(void)
{
    double height, low, S;
    printf("三角形の高さを入力してください\n");
    scanf("%lf", &height);

    printf("三角形の底辺の長さを入力してください.\n");
    scanf("%lf", &low);

    S = height * low / 2;
    printf("三角形の面積は%f", S);

    return 0;
}