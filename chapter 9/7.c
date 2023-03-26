#include<stdio.h>
int location_A( char c);
int location_a(char c);

int main(void)
{
    int x;
    char c;
    printf("Enter character string:");
    while((c = getchar()) != EOF)
    {
        if(c == '\n')
        {
            printf("Enter character string:");
            continue;
        }
            
        if(c >= 'a' && c <= 'z')
        {
            x = location_a(c);
            printf("%c 是第 %d 位。\n",c,x+1);
            continue;
        }
        else if ((c >='A'&&c<='Z'))
        {
            x = location_A(c);
            printf("%c 是第 %d 位。\n",c,x+1);
            continue;
        }
        else 
        {
            printf("-1\n");
            continue;
        }
    }
}

int location_A(char c)
{
    int x = c-'A';
    return x;
}
int location_a(char c)
{
    int x = c-'a';
    return x;
}