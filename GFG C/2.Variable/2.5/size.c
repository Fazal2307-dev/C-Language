#include<stdio.h>


int main(){
    int x = 4;
    double d = 11.5;
    printf("%zu \n",sizeof(x));
    printf("%zu \n",sizeof(d));
    printf("%zu \n",sizeof(15ll));
    printf("%zu \n",sizeof(13.6f));
    printf("%zu \n", sizeof(x+10));
    return 0;

}
