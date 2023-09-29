#include<stdio.h>
int main(){
    int r,h;
    float a,v;
    printf("Radius of circle");
    scanf("%d",&r);
    a=3.14*r*r;
    printf("Areaof circle is %f",a);
    printf("Height of cylinder ");
    scanf("%d",&h);
    v=a*h;
    printf("Volume of cylinder %f",v);
    return 0;
}