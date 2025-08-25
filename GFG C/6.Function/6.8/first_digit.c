#include<stdio.h>
int firstDigit(int x){
    while(x>10){
        x = x / 10;
    }
    return x;
}



int main(){
    int n;
    printf("Enter value of n:\n");
    scanf("%d",&n);
    int dig=firstDigit(n);
    printf("%d",dig);
    return 0;
}