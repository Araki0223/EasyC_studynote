#include <stdio.h>

int main(void)
{
    int ans;

    printf("整数を入力して下さい.\n");
    scanf("%d", &ans);

    if ((ans % 2) == 0){
        printf("%dは偶数です.\n", ans);
    }
    else if ((ans % 2) == 1){
        printf("%dは奇数です.\n", ans);
    }

    return 0;
}