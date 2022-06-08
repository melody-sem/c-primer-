#include <stdio.h> 
int main(void) /* finds sum of first n integers */ 
{ 
    int count, sum; 
    int n; 
 
    printf("Enter the upper limit: "); 
    scanf("%d", &n); 
    count = 0; 
    sum = 0; 
    while (count++ < n) 
    sum = sum + count; 
    printf("sum = %d\n", sum); 
    
     return 0; 
} 