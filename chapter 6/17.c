#include<stdio.h>
#define RATE_YEAR 0.08
#define MONEY   1000000
int main( void )
{
    int year = 0;
    double money = MONEY;
    while(money>0)
    {
        money = money*(1+RATE_YEAR);
        money = money - 100000;
        year++;
    }
    printf("You can use %d years.",year);
}