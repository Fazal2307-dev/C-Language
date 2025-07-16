// Write a C program to input temperature in Centigrade and convert to Fahrenheit.

#include<stdio.h>
int main(){
    int celcius;
    printf("Enter the value of celcius:");
    scanf("%d",&celcius);
    float fahrenheit = (celcius * 9 / 5) + 32;
    printf(" changing value from celcius to fahrenheit:%f \n",fahrenheit);
    return 0;
}