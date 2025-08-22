#include<stdio.h>
int main(){
    double x =1.345;
    printf("%.2g\n",x);
    printf("5.2g\n",x);
    printf("%*.*g\n",5,2,x);
    printf("%0*.*g\n",5,2,x);
    printf("%-5.2g\n",x);
    return 0;
}