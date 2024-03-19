#include <stdio.h>

int main(void)
{
    int inum;
    double dnum;

    inum = 160;

    printf("身長は%dセンチ\n", inum);

    dnum = (double)inum;

    printf("身長は%fセンチ\n", dnum);

    return 0;
}