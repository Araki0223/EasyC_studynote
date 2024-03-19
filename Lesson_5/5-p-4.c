#include <stdio.h>

int main(void)
{
    char ans;

    printf("A~Cまでの文字を入力してください.\n");
    ans = getchar();

    if (ans == 'A' || ans == 'B' || ans == 'C'){
        printf("正解です.\n");
    }
    else{
        printf("間違いです.\n");
    }
    return 0;
}