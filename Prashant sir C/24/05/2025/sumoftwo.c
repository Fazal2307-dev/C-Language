#include<stdio.h>
int main(){
  int num1,num2,sum;
  printf("Welcome to coding practice\n");
  printf("please enter num1 value: ");
  scanf(" %d", &num1);
  printf("Now,Enter num2 value: ");
  scanf("%d",&num2);
  sum = num1+num2;
  printf("sum of two value is :%d",sum);
  return 0;
}