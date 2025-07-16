#include<stdio.h>
int main(){
    int num1,num2;
    printf("Value of num1:");
    scanf("%d",&num1);
    printf("Value of num2:");
    scanf("%d",&num2);
    int sum = num1+num2;
    int sub = num1-num2;
    float div = num1/num2;
    int multi = num1*num2;
    printf("%d\n",sum);
    printf("%d\n",sub);
    printf("%f\n",div);
    printf("%d\n",multi);
 return 0;   
}