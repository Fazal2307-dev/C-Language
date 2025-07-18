// Write a C program to input temperature in degree Fahrenheit and convert it to degree Centigrade. 

#include<stdio.h>
int main(){
int fahrenheit ;
printf("Enter value of fahrenheit :");
scanf("%d",&fahrenheit);
float centigrade = (fahrenheit-32) * 5/ 9;
printf("%f \n: ",centigrade);
return 0;
}