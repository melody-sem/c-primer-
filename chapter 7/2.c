#include<stdio.h>
#define STOP    '#'
int main( void )
{
    int count = 0;
    char ch;

    while((ch=getchar())!=STOP){
        if(ch=='\n')
            continue;

        printf("%c-%d ",ch,ch); 

        count++;
        if(count%8==0)
            printf("\n"); 
    }
    
    return 0;
}