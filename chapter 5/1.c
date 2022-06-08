#include<stdio.h>
#define RADIO 60
int main()
{
    
    int minutes;
    int hour,minute;
    printf("Please enter minutes:");
    scanf("%d",&minutes);
    while(minutes>0){

        hour = minutes / RADIO;
        minute = minutes %RADIO;

        printf("%d minutes is %d hours %d minutes\n",minutes,hour,minute);
        printf("Please enter minutes:");

        scanf("%d",&minutes );
        
    }
    return 0;
}