#include<stdio.h>
#define YEAR_SECOND 3.156E7
int main()
{
    long int seconds;
    int years;
    printf("�������䣺 ");
    scanf("%d",&years);
    printf("seconds=%e",years*YEAR_SECOND);
    
    return 0;
}