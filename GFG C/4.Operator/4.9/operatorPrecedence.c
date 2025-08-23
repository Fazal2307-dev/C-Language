#include<stdio.h>
int main(){
    int x =10,y=20;
    int z = x+x*y;
    printf("%d\n",z);
    z = (y/x)+x;
    printf("%d\n",z);
    z =y=x;
    printf("%d\n",z);
    printf("%d",z);
    return 0;
}