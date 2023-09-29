#include<stdio.h>
int main()
{
    int n,i=0,prime=1;
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }
        if(prime==0){
            printf("number is not prime");
        }
        else{
            printf("number is prime");
        }
    
    return 0;
}
