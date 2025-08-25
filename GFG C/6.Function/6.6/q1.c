#include<stdio.h>
void fun(int);

int main(){
    fun(10);
    return 0;

}
void fun(int x){
    printf("Value is %d",x);
}