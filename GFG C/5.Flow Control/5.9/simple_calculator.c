#include<stdio.h>
int main(){
    int op,x,y;
    printf("enter value of op,x and y:\n");
    scanf("%d %d %d",&op,&x,&y);
    int res;
    if(op== 1){
        res = x+y;
        printf("addition is:%d",res);
    }else if(op== 2){
        res=x-y;
        printf("subtraction is:%d",res);
    }else if(op== 3){
        res = x*y;
        printf("Multiplication is:%d",res);
    }else
    printf("Invalid input");
    return 0;
}