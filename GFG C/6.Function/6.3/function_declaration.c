#include<stdio.h>
int getMax(int x,int y);

int main(){
    int a=10,b=20;
    printf("%d",getMax(a,b));
    return 0;
}
int getMax(int x ,int y){
    if(x>y)
    return x;
    else 
    return y;
}