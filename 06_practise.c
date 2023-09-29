#include<stdio.h>
int main()
{
    int math,science,history;
    float percent;
   int total_marks=300;
    printf("Enter marks of math");
    scanf("%d",&math);
    printf("Enter marks of science");
    scanf("%d",&science);
    printf("Entermarks of history");
    scanf("%d",&history);
    int sum=math+science+history;
    printf("%d",sum);
    percent=sum/3;
    printf("Percentage of student %f \n",percent);
    if((percent>40) || (math>33 || science>33 || history>33)){
        printf("student will pass");   
    }
    else {
        printf("student will fail");
    }

    return 0;
}