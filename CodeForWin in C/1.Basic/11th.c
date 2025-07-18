// Write a C program to input two numbers from user and find their power using pow() function.
#include<stdio.h>
#include<math.h>
int main(){
    double base,power,expo;
    printf("Enter value of base :");
    scanf("%lf",&base);
    printf("Enter value of expo :");
    scanf("%lf",&expo);
    power = pow(base,expo);
    printf("value of power %.2lf ^ %.2lf = %.2lf ",base,expo,power);
    return  0;
}