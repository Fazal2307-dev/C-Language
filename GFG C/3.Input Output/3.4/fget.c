#include<stdio.h>
int main(){
    char name[100];
    printf("Enter your name:\n");
    fgets(name,100,stdin);
    printf("Hi, %s",name);
    printf("welcome to gfg");
    return 0;
}