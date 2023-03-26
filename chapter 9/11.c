#include "stdio.h"
void Fibonacci(int n);
int main()
{
    int n;
    printf("Enter a value(int:)");
    scanf("%d",&n);
    printf("%d 个斐波拉契数列：",n);
    Fibonacci(n);

    return 0;
}
void  Fibonacci(int n)
{
    int fib[n];
    fib[0] = fib[1] =1;
    for(int i=2;i<n;i++)
    {
        fib[i] = fib[i-1]+fib[i-2];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",fib[i]);
    }
}