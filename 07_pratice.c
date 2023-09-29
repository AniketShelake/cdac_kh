#include<stdio.h>
int main()
{
    int income;
    float tax=0;
    printf("Enter income of employee");
    scanf("%d",&income);
    if(income>250000 && income<500000){
        tax= tax+ 0.05*(income-250000);
    
    }
    else if(income>500000 && income<1000000){
        tax=tax+0.2*(income-500000);
        
    
    }
    else if(income>1000000){
        tax=tax+0.3*(income-1000000);
    
    }
    printf("Youhace to pay %f",tax);
    
    return 0;
}