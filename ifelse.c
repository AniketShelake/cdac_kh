#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number");
    scanf("%d",&num);
    if(num==1){
        printf("number is 1");
    }
    else if(num==2){
        printf("number is 2");
    }
    else if(num==3){
        printf("number is 3");
    }
    else{
        printf("number is not 1,2,3");
    }
    return 0;
}