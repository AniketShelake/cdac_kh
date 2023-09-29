#include<stdio.h>
int sum(int a, int b);
int main(){
    int sum(int a, int b),c;
    
    c=sum(7,8);
    printf("%d",c);
    return 0;
}
int sum(int a, int b){
    int result;
    result= a+b;
    return result;
}