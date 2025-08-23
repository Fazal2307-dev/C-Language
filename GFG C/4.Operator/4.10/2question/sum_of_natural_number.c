#include<stdio.h>
int main(){
    int n;
    printf("Enter value of n:\n");
    scanf("%d",&n);
    int sum = (n*(n+1))/2;
    printf("%d",sum);
    return 0;

}