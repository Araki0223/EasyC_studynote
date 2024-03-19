#include <stdio.h>

int main(void)
{
    char str[100];

    int i, c;
    
    printf("文字列を入力してください.\n");
    scanf("%s", str);

    c = 0;

    for (i=0; str[i]!='\0'; i++){
        c++;
    }

    printf("文字列の長さは%dです\n", c);

    return 0;
}