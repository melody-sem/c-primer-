#include <stdio.h>
#include<string.h>
int main(void) 
{ 
    char fname[40]; 
    char lname[40]; 
    int f_long;
    int l_long;
 
    printf("Enter your first name: "); 
    scanf("%s", fname); 
    printf("Enter your last name: "); 
    scanf("%s", lname); 
    f_long = strlen(fname);
    l_long = strlen(lname);

    printf("%s %s\n", lname, fname); 
    printf("%*d %*d\n",l_long,l_long,f_long,f_long);
    printf("%s %s\n", lname, fname); 
    printf("%-*d %-*d",l_long,l_long,f_long,f_long);

    return 0; 
}