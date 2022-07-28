#include <stdio.h> 
#define SIZE 8 
int main(void) 
{ 
    double arr[SIZE]; 
    double arr_cumul[SIZE]; 
    int i; 
    
    printf("Enter %d numbers:\n", SIZE); 
    
    for (i = 0; i < SIZE; i++) 
    { 
        printf("value #%d: ", i + 1); 
        scanf("%lf", &arr[i]); 
    } 
    
    arr_cumul[0] = arr[0]; 
    for (i = 1; i < SIZE; i++) 
        arr_cumul[i] = arr_cumul[i-1] + arr[i]; 
    
    for (i = 0; i < SIZE; i++) 
        printf("%8g ", arr[i]); 
    printf("\n"); 

    for (i = 0; i < SIZE; i++) 
        printf("%8g ", arr_cumul[i]); 
    printf("\n"); 
    
    
    return 0; 
}