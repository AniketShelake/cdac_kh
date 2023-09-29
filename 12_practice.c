#include<stdio.h>
int main(){
    int n,i=1;
    printf("Enter the number which table you want to print");
    scanf("%d",&n);

        while(i<=10){
        printf("%d\n",n*i);
        i++;
        
    }
    return 0;
}