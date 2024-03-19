#include <stdio.h>

int main(void)
{
    int a, i;

    printf("2以上の整数を入力してください.\n");
    scanf("%d", &a);

    for(i=2; i<=a; i++){       
        if(i == a){
            printf("%dは素数です.\n", a);
        }
        else if((a%i) == 0){
            printf("%dは素数ではありません.\n", a);
            break;
        }
        else{
            printf("%dで割れませんでした\n", i);
        }
    }

    return 0;
}