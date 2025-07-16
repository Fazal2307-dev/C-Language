// Write a C program to input two numbers from user and calculate their sum.


#include<stdio.h>
int main(){
    int num1,num2;
    printf("Please provide num1 value:\n");
    scanf("%d",&num1);
    printf("please provide num2 value:\n");
    scanf("%d",&num2);
    int sum = num1 + num2;
    printf("sum of num1 and num2 : %d", sum);
    return 0;
}