#include<stdio.h>
void fun1(){
    printf("Calling fun1():\n");
}
int main(){
    printf("Before calling fun1():\n");
    fun1();
    fun1();
    printf("After calling fun1():\n");
    return 0;
}