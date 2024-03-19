#include <stdio.h>

int main(void)
{
    int ans1, ans4;
    double ans2, ans3, ans5;

    ans1 = 0-4;
    ans2 = 3.14*2;
    ans3 = (double)5/(double)3;
    ans4 = 30 % 7;
    ans5 = (7+32)/5.0;

    printf("%d\n", ans1);
    printf("%f\n", ans2);
    printf("%f\n", ans3);
    printf("%d\n", ans4);
    printf("%f\n", ans5);

    return 0;
}