#include<stdio.h>
int main(){
    int i=0, n=10,sum=0;
    do{
        sum+=i;
        i++;
    }while(i<=n);
    printf("%d",sum);
    return 0;
}