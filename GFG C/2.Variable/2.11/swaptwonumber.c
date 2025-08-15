#include<stdio.h>
int main(){
    int a,b;
    printf("Enter Value of a and b:\n");
    scanf("%d %d",&a,&b);
    a = a + b;
    b = a-b;
    a = a-b;
    printf("%d %d",a,b);
    return 0;
}