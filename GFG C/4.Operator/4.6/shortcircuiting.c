#include<stdio.h>
#include<stdbool.h>
int main(){
    int x = 5;
    bool res= (x++ && x>6);
    printf("%d\n",res);
    printf("%d\n",x);
    return 0;
}