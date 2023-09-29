#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any char\t");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'){
    printf("char is lowercase");
    }
    else{
        printf("char is uppercase");
    }
    return 0;
}