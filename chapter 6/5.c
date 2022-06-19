#include<stdio.h>
#define C 'A'
int main()
{
    char letter;
    int number;
    int count=1;
    int x;

    scanf("%c",&letter);
    number = letter - 'A';
    
    for(;number>=0;number--)
    {
        for(int i = number;i>0;i--)
        {
            printf(" ");
        }
        x=0;
        for(int y=count;y>0;y--)
        {
            if(count>1)
                if(y>count/2)
                {
                    printf("%c",C+x);
                    x++;
                }    
                else
                {
                    printf("%c",C+y-1);
                }
            else
                printf("%c",C);
        }
        count = count+2;
                for(int i = number;i>0;i--)
        {
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}