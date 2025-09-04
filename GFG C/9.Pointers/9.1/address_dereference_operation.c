#include<stdio.h>
int main(){
    int x=10;
    printf("%p",&x);
    printf("\n%d",*&x);
    return 0;
}