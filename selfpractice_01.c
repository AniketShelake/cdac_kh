#include<stdio.h>
int main()
{
    int star;
    printf("How many star you give");
    scanf("%d",&star);
    if(star==1){
        printf("*");
    }
    else if(star==2){
        printf("**");
    }
    else{
        printf("***");
    }
    return 0;
}