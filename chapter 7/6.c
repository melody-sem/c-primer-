#include<stdio.h>
#define STOP    '#'
int main( void )
{
    int count = 0;
    char ch;
    char chf;

    while((ch=getchar())!=STOP){
        if(ch=='e')
           count++;
        if(ch=='i')
            count++;
        chf = ch;
    }
    
    printf("e,i the number of emerging is %d .",count);
    
    return 0;
}