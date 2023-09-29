#include<stdio.h>
int area(int a);
int main(){
    int area(int a),c;
    c=area(4);
    printf("area of square is %d",c);
    return 0;
}
int area(int a){
    int result;
    result=a*a;
    return result;
}