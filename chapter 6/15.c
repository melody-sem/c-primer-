#include<stdio.h>
#include<string.h>
#define SIZE 255
int main( void )
{
  int i,j,t,n;
  char a[SIZE];
  
  printf("Enter character string:");
  gets(a);
  n=strlen(a);

  for(j=n-1;j>=0;j--)
	printf("%c",a[j]);
  printf("\n"); 
  
  return 0;
} 