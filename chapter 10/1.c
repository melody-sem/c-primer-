#include"stdio.h"
int main(void)
{
    char ch[4] = {'c','b'};
    char * p;
    char c[4];
    p = ch;
    printf("%c ",*p);
    printf("%c",*p+1);

    c =&ch[0] ;
    printf("\n%c",c[0]);
    
    printf("\n");
    return 0;
}