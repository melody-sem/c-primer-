#include<stdio.h>
int main()
{
    
    int minutes;
    int hour,minute;
    const int radio = 60;

    scanf("%d",&minutes);
    while(minutes>0){

        hour = minutes / radio;
        minute = minutes %radio;

        printf("%d minutes is %d hours %d minutes",minutes,hour,minute);

        scanf("%d",&minutes );
        
    }
    return 0;
}