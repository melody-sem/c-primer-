#include<stdio.h>
#include<string.h>
void showMessage();
void get_first(void);
void add(void);
void subtract(void);
void multiply(void);
void divide(void);
void enter(void);
void double_string(double num1,double num2,double num3);
void Double2String(char *str,int len,double value);
double num1;
double num2;
double num3;
char ch;
char str1[20];
char str2[20];
char str3[20];
int main(void)
{
    
    while(1)
    {
        showMessage();
    
        if(ch!='a'&&ch!='s'&&ch!='m'&&ch!='d'&&ch!='q')
        {
            printf("Please enter the right number.");
            continue;
        }
        if(ch!='q')
        {
            switch (ch)
            {
            case 'a': add();
                break;
            case 's': subtract();
                break;
            case 'm': multiply();
                break;
            case 'd': divide();
                break; 
            default: printf("It is error.");
                break;
            }
        }
        if(ch == 'q') break;
        while (getchar() != '\n')
            continue;
    }

    printf("Bye.\n\n");
    return 0;
}
void showMessage()
{
    printf("Enter the operation of your choice:\n");
    printf("a. add\t\ts. subtract\n");
    printf("m. multiply\td. divide\n");
    printf("q. quit\n");
    get_first();
}
void get_first(void)
{
    while(1)
    {
        ch=getchar();
        if(ch==' ')
            continue;
        else
            break;
    }
    while (getchar() != '\n')
        continue;
    
}
void add(void)
{
    enter();
    num3 = num1 + num2;
    printf("%g + %g = %g\n",num1,num2,num3);
}
void subtract()
{
    enter();
    num3 = num1 - num2;
    printf("%g - %g = %g\n",num1,num2,num3);
}
void multiply()
{
    enter();
    num3 = num1 * num2;
    printf("%g * %g = %g\n",num1,num2,num3);
}
void divide()
{
    enter();
    num3 = num1 / num2;
    printf("%g / %g = %g\n",num1,num2,num3);
}
void enter()
{   char ch1;
    printf("Enter first number:");
   
    while (scanf("%lf", &num1) != 1)
    {
        while ((ch1 = getchar()) != '\n')
            putchar(ch1);  
        printf(" is not a number.\nPlease enter a ");
        printf("number , such as 2.5, -1.78E8, or 3: ");
    }
    printf("Enter second number:");
    while (scanf("%lf", &num2) != 1)
    {
        while ((ch1 = getchar()) != '\n')
            putchar(ch1);  
        printf(" is not a number.\nPlease enter a ");
        printf("number , such as 2.5, -1.78E8, or 3: ");
    }
    if(ch == 'd')
    {
        while (num2 == 0)
        {
            printf("enter a number other than 0: ");
            while (scanf("%lf", &num2) != 1)
            {
                while ((ch1 = getchar()) != '\n')
                    putchar(ch1);  
                printf(" is not a number.\nPlease enter a ");
                printf("number , such as 2.5, -1.78E8, or 3: ");
            }
        }
    }
    
}