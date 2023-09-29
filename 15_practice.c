#include<stdio.h>
int main()
{
    int n=8,i=10,sum=0;
    for(i=1;i<=10;i++)
    {
        printf("%d\n",i*n);
        sum+=i*n;
    }
    printf("%d",sum);
  return 0;
}