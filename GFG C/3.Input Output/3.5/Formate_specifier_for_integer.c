#include<stdio.h>
int main(){
    int x =10;
    printf("%d\n",x);
    long y = 20;
    printf("%ld\n",y);
    long long z = 30;
    printf("%lld\n",z);
    unsigned w = 40;
    printf("%u\n",w);
    size_t v = sizeof(x);
    printf("%zd",x);
    
    return 0;
}