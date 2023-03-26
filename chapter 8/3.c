#include <stdio.h> 
#include <ctype.h> 
int main(void) 
{ 
    int ch; 
    unsigned long uct = 0; 
    unsigned long lct = 0; 
    unsigned long oct = 0; 
    
    while ((ch = getchar()) != EOF) 
        if (isupper(ch)) 
            uct++; 
        else if (islower(ch)) 
            lct++; 
        else 
            oct++; 
            
    printf("%lu uppercase characters read\n", uct); 
    printf("%lu lowercase characters read\n", lct); 
    printf("%lu other characters read\n", oct); 
    
    return 0; 
} 
 
/* 
 or you could use 
 if (ch >= 'A' && ch <= 'Z') 
 uct++; 
 else if (ch >= 'a' && ch <= 'z') 
 lct++; 
 else 
 oct++; 
*/ 