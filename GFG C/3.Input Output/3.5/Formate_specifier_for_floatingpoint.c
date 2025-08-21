#include<stdio.h>
int main(){
    float x = 12.45;
    double y = 125.456978;
    double z = 15e+6;
    printf("%f %f %f\n",x,y,z);
    printf("%e %e %e\n", x,y,z);
    printf("%g %g %g \n",x,y,z);
    return 0;


}