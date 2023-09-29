#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,nguess=1;
    srand(time(0));
    number=rand()%100+1;
    printf("The number is %d\n",number);
    do{
        printf("Guess number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess<number){
            printf("Greater number please\n");
        }
        else if(guess>number){
            printf("Lower number please\n");    
        }
        else{
            printf("You guess it in %d attemp\n",nguess);
        }
        nguess++;
    }while(number!=guess);
    return 0;
}

