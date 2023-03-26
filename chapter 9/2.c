#include <stdio.h> 
 
void chline(char, int,int); 

int main(void) 
{ 
    int x, y; 
    char ch;
    while(1){
        printf("Enter an character :");
        ch = getchar();
        printf("Enter  two number (q to quit): "); 
        if (scanf("%d %d", &x, &y) == 2) 
        { 
            chline(ch,x,y);
        } 
        else break;
    }
    printf("Bye!\n"); 
    
    return 0; 
} 
 
void chline(char ch, int i,int j)
{ 

    for(int x = 0;x<j;x++)
    {
        for(int y=0;y<i;y++)
        {
            printf("%c ",ch);
        }
        printf("\n");
    } 
    while(getchar()!='\n')
        continue;
}
