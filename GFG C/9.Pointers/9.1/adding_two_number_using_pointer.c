#include<stdio.h>
int main(){
    int num1,num2;
    int *ptr1,*ptr2;
    ptr1=&num1;
    ptr2=&num2;
    printf("Enter num1 and num2 value:\n");
    scanf("%d%d",ptr1,ptr2);
    int sum=0;
    sum = *ptr1+*ptr2;
    printf("%d",sum);
    return 0;
}