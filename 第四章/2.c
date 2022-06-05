#include<stdio.h>
#include<string.h>
int main()
{
    char fname[40]; 
    int width;

    printf("Enter your first name: "); 
    scanf("%s", fname); 
    width = strlen(fname)+3;

    printf("%zd",width);
    printf("\"%s\"\n", fname); 
    printf("\"%20s\"\n" , fname); 
    printf("\"%-20s\"\n", fname); 
    printf("\"%*s\"\n",width, fname); 

    return 0;
}