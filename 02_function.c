#include<stdio.h>
void change(int a);
int main(){
    int a=234;
    printf("The value of a before %d\n",a);
    change(a);
    printf("The value of a after %d",a);

    return 0;
}
void change(int a){
    a=77;

}