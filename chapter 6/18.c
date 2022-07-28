#include<stdio.h>
#define DUNBAR  150
#define FIRST   5
int main( void )
{
    int weeks=1;
    int numbers = FIRST;

    while(1)
    {
        numbers=numbers - weeks;
        numbers=numbers*2;
        if(numbers > DUNBAR) break;
        printf("The %d weeks : %d\n",weeks,numbers);
        weeks++;
    }
    
    return 0;
}