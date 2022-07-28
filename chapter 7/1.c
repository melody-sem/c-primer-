#include<stdio.h>
#define STOP    '#'
int main( void )
{
    int space = 0;
    int linef = 0;
    int other = 0;
    char ch;

    
    while((ch=getchar())!=STOP){
        if(ch == ' ')
            space++;
        else if(ch == '\n')
            linef++;
        else 
            other++;
        
    }
    printf("space = %d,linef = %d,other = %d",space,linef,other);
    
    return 0;
}