#include <stdio.h>

int main(void)
{
    int i;

    printf("1~10までの偶数を出力します.\n");

    for(i=1; i<=10; i++){
        if(i%2 == 1){
            continue;
        }
        printf("%d\n", i);
    }
}