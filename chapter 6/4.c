#include <stdio.h> 
int main( void ) 
{ 
    char let = 'A'; 
    char start; 
    char end;
    int count = 1; 
    int i;
    
    for (end = let; end <= 'U';count++ ) 
    { 
        for (start = end, i = count; i > 0; i--) 
        {   
            printf("%c", start); 
            end++;
            start++;
        }
        printf("\n"); 
    } 
    
    return 0; 
} 
