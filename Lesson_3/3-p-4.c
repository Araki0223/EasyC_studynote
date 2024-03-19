#include <stdio.h>

int main(void)
{
    float height, weight;

    printf("身長と体重を入力してください。\n");
    scanf("%f", &height);
    scanf("%f", &weight);

    printf("身長は%fセンチです。\n", height);
    printf("体重は%fキロです。\n", weight);

    return 0;
}