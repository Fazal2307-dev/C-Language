#include<stdio.h>
int main(){
    int n;
    printf("Enter value of n:\n");
    scanf("%d",&n);
    if(n ==1 || n==0){
        printf("Not a Prime");
        return 0;
    }
    int i =2;
    while(i<n){
        if(n % i ==0){
            printf("Not a prime no");
            return 0;
        }
        i++;
    }
    printf("Prime no");
    return 0;
}