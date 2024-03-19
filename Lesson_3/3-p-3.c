#include <stdio.h>

int main(void)
{
    char ch;

    printf("アルファベットの最初の文字は何ですか？\n");
    ch = getchar();

    printf("アルファベットの最初の文字は%cです。\n", ch);

    return 0;
}