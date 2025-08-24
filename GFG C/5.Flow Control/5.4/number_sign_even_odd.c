#include<stdio.h>
int main(){
    int number;
    printf("Enter value of number:\n");
    scanf("%d",&number);
    if(number > 0){
        printf("Postive ");
        if(number%2==0)
        printf("Even");
        else
        printf("Odd");

    }else if(number<0){




    }else
    printf("zero");
    return 0;
}