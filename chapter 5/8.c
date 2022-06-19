#include<stdio.h>
int main()
{
    int x,y;

    printf("This program computes moduli.\n");
    printf("Enter  an integer to serve as the second operand:");
    scanf("%d",&y);
    printf("Now enter the first operand:");
    scanf("%d",&x);

    while(x>0){
        //printf("%d %% %d is %d\n",x,y,x%y);
        printf("%d %c %d is %d\n",x,'%',y,x%y);
        //printf("%d %s %d is %d\n",x,"%",y,x%y);
        printf("Enter the next number for first operand(<= 0 to quit):");
        scanf("%d",&x);
    }
    printf("Done\n");
    return 0;
}