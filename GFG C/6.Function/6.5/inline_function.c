#include<stdio.h>
static inline int getMax(int x,int y){
    return (x>y) ? x : y;
}
int main(){
    int a=10,b=20;
printf("%d",getMax(a,b));
return 0;
}