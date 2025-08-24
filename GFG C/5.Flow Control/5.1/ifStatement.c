#include<stdio.h>
int main(){
    int age;
    printf("Enter value of age:\n");
    scanf("%d",&age);
    if(age>=18)
    printf("You are Adult");
    else
    printf("you are teenager");
    return 0;
}