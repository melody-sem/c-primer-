#include<stdio.h>
#define RADIO 7
int main()
{
    
    int days;
    int week,day;
    printf("Please enter days:");
    scanf("%d",&days);
    while(days>0){

        week = days / RADIO;
        day = days %RADIO;

        printf("%d days is %d weeks %d days\n",days,week,day);
        printf("Please enter days:");

        scanf("%d",&days );
        
    }
    return 0;
}