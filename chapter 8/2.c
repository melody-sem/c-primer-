#include <stdio.h> 
int main(void) 
{ 
    char ch; 
    int ct = 0; 
    int ch_asc;
    
    while ((ch = getchar()) != EOF) {
        if(ch=='\n') 
            printf("\\n ");
        else 
            printf("%c ",ch);

        ch_asc= (int)ch;
        printf("%d",ch_asc);
        ct++;
        printf("   ");
        if(ct==10){
            printf("\n");
            ct=ct%10;
        }

     }
    
    return 0; 
} 