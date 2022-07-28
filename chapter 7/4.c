#include<stdio.h>
#define STOP    '#'
int main( void )
{
    int count = 0;
    char ch;

    while((ch=getchar())!=STOP){
        if(ch=='.'){
            printf("!");
            count++;
        }
        else if(ch=='!'){
            printf("!!");
            count++;
        }
        else
            putchar(ch);
    }
    printf("\n");
    printf("Replace number is %d .",count);

    
    return 0;
}