#include<stdio.h>
void fun1(){
    printf("Calling fun1():\n");
}
int main(){
    printf("Before caaling fun()1:\n");
    fun1();
    printf("after calling fun1():\n");
    return 0;
}