#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter 1 st number");
    scanf("%d",&a);
      printf("Enter 2  number");
    scanf("%d",&b);
      printf("Enter 3  number");
    scanf("%d",&c);
      printf("Enter 4 number");
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf("%d is greatest number",a);
    }
    else if(b>a && b>c && b>d){
        printf("%d is greatest number",b);    
    }
    else if(c>a && c>b && c>d){
        printf("%d is greatest number",c);

    }
    else{
        printf("%d is gratest number",d);
    }
    return 0;
}