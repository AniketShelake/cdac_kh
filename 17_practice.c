#include<stdio.h>
int main(){
    int i=1,n,factorial=1;
    scanf("%d",&n);
    while(i<=n){
        factorial*=i;
        i++;
    }
    printf("Factorial of %d is %d",n,factorial);
    return 0;
}