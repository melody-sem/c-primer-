#include<stdio.h>
#define STOP    '#'
int main( void )
{
    int count = 0;
    char ch;

    while((ch=getchar())!=STOP){
        switch (ch)
        {
        case '!':
            printf("!!");
            count++;
            break;
        case '.':
            printf("!");
            count++;
            break;
        default:
            putchar(ch);
            break;
        }
    }
    printf("\n");
    printf("Replace number is %d .",count);

    
    return 0;
}