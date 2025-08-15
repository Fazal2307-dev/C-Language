#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Please Enter Value of a and b:\n");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d %d ",a,b);
    return 0;



}