#include<stdio.h>
int main()
{
    int number = 5;
    int i = 1;
    int y;
    for(i;number>0;i++)
    {
        for(y = i;y>0;y--)
        {
            printf("$" );
        }
        printf("\n");
        number--;
    }
    return 0;
}