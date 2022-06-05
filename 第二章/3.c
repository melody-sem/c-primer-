#include<stdio.h>
#define  YEAR  20
#define  DAY   365
int main()
{
    int days;
    days=DAY*YEAR;
    printf("你出生以来，日月更替了 %d 天",days);

    return 0;
}