#include<stdio.h>
int main()
{
    int age;
    int vip=0;
    vip=1;
    printf("Enter the age");
    scanf("%d",&age);
    if((age<70 && age>18) || !(vip==1))
    {
        printf("You can drive");
    }
    else{
        printf("You cannot drive");
    }
    return 0;
}