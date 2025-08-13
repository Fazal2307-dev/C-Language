#include<stdio.h>
int main(){
    float a= 10.5f;
    double b= 10.515;
    long double c= 10.515L;
    float d = 2.1e4f;
    double e = 200.1e-80;
    long double f = 0X1A.1p2;
    printf("%g %g %lg %g %g %g",a,b,c,d,e,f);
    return 0;
}
