#include<stdio.h>
int main(){
    int n;
    printf("Enter value of n:\n");
    scanf("%d",&n);
    if(n % 2==0)
    printf("Opponent win");
    else
    printf("Player wins");
    return 0;
}