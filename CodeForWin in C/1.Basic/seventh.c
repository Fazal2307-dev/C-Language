// Write a C program to input length in centimeter and convert it to meter and kilometer. 


#include<stdio.h>
int main(){
    float length;
    printf("Enter Value in centermeter:");
    scanf("%f",&length);
    float meter = length /100.0;
    float  kilometer = length / 100000.0;
    printf("value in meter:%f \n",meter);
    printf("value in kilometer:%f \n",kilometer);
    return 0;

}