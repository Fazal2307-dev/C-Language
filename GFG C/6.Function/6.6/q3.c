#include<stdio.h>
void fun1(){
    static int x =0;
    int y=0;
    x++;
    y++;
    printf("%d %d\n",x,y);
}
int main(){
    fun1();
    fun1();
    return 0;
}