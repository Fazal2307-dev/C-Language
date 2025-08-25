#include<stdio.h>

void fun2(){
    printf("Calling fun2():\n");
}
void fun1(){
    printf("Before calling fun2():\n");
    fun2();
    printf("after calling fun2():\n");
}
int main(){
    printf("Before calling fun1():\n");
    fun1();
    printf("Affter calling fun1():\n");
    return 0;
}