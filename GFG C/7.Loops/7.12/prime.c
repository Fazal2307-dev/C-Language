#include<stdio.h>
int main(){
    int n;
    printf("enter value of n:\n");
    scanf("%d",&n);
    if(n ==0 || n==1){
        printf("Not a prime number:\n");
    }
    int i=2;
    while(i<n){
        if(n % i ==0){
            printf("Not a prime");
            return 0;
        }
        i++;
    }
    printf("Prime No");
    return 0;
}