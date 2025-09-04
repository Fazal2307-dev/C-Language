#include<stdio.h>
int main(){
int a,b,temp=0;
int *ptr1,*ptr2,*ptr3;
ptr1=&a;
ptr2=&b;
printf("Enter value of a and b:\n");
scanf("%d %d",&a,&b);
temp=*ptr1;
*ptr1=*ptr2;
*ptr2=temp;
printf("After swapping: a = %d, b = %d\n",*ptr1,*ptr2);
return 0;

}