#include<stdio.h>
float avg(int a, int b, int c);
int main(){
   int a,b,c,d;
   printf("Enter value of a\n");
   scanf("%d",&a);
printf("Enter value of b\n");
scanf("%d",&b);
printf("Enter value of c\n");
scanf("%d",&c);

printf("Average of three number %f",avg(a,b,c));
}
float avg(int a, int b,int c){
    
   float av=(a+b+c)/3.0;
   return av;


}