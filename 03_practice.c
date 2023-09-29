//celsiuc to degree converter
#include<stdio.h>
int main()
{
    int c;
    float f;
    printf("Enter temp. in celcius");
    scanf("%d",&c);
f=c*9/5+32;
    printf("Temp. in fern. %f",f);
    return 0;
}