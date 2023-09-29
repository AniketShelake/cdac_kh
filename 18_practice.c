#include<stdio.h>
int main(){
    int n,i=2;
    printf("Enter the number");
    scanf("%d",&n);
    while(i<n){
        if(n%i==0 && n!=2){
            printf(" Not Prime number");
            i++;
            break;

        }

        else{
            printf("Prime number");
            break;
        }
    }
    return 0;
}