#include <stdio.h>
int main(void)                /* finds sum of first 20 integers */
{
    int count, sum;           /* declaration statement          */
    int days;
    printf("Please enter the days:");
    scanf("%d",&days);
    count = 0;                /* assignment statement           */
    sum = 0;                  /* ditto                          */
    while (count++ < days)      /* while                          */
        sum = sum+count*count;    /*     statement                  */
    printf("sum = %d\n", sum);/* function statement             */
    
    return 0;                 /* return statement               */
}
