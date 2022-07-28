#include<stdio.h>
#define RATE1   0.15
#define RATE2   0.28
void showMessage();
int main()
{
    double taxes;
    double salary;
    int number;
    while(1){
        showMessage();
        scanf("%d",&number);
        while(1){
            if(number==1||number==2||number==3||number==4||number==5){
            break;
            }
            else {   
                printf("Please enter the right number.\n");         
                showMessage();
                scanf("%d",&number); 
            }
        }
        if(number == 5) break;
        printf("Please enter your salary:\n");
        scanf("%lf",&salary);
        switch(number)
        {
            case 1: 
                if(salary<17850)
                    taxes = salary*RATE1;
                else taxes = 17850*RATE1 + (salary-17850)*RATE2;
                break;
            case 2: 
                if(salary<23900)
                    taxes = salary*RATE1;
                else taxes = 23900*RATE1 + (salary-23900)*RATE2;
                break;
            case 3: 
                if(salary<29750)
                    taxes = salary*RATE1;
                else taxes = 29750*RATE1 + (salary-29750)*RATE2;
                break;
            case 4: 
                if(salary<14875)
                    taxes = salary*RATE1;
                else taxes = 14875*RATE1 + (salary-14875)*RATE2;
                break;
        }
        printf("Your taxes is $ %.2f\n",taxes);
    }
    printf("It is end.");
    return 0;
}
void showMessage(){
    printf("Enter the categroy:\n");
    printf("1) 单身\t\t2) 户主\n");
    printf("3) 已婚 共有\t4) 已婚 离异\n");
    printf("5) quit\n");
}