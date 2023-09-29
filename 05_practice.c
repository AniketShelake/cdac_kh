#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    printf("divisiblity test return %d \n",a%97);
    int x=2, y=3, z=3, k=1;
    int result=3*x/y-z+k;
    printf("Result %d",result);
    return 0;
}