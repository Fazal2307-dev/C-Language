#include<stdbool.h>
#include<stdio.h>
int main(){
    int x =10,y=20;
    bool res = (x>0&&x<10);
    printf("%d\n",res);
    res = (x>0||x>y);
    printf("%d\n",res);
    return 0;
}