#include <stdio.h>

int main(void)
{
    int i, j, ch;

    ch = 0;

    for(i=0; i<5; i++){
        for(j=0; j<100; j++){
            
            if(ch == 0){   
                printf("*");
                ch = 1;
            }
                else{
                printf("_");
                ch = 0;
            }
        }
        printf("\n");
    }

    return 0;
}