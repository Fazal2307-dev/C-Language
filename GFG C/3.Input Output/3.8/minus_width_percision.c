#include<stdio.h>
int main(){
    int x = 124;
    char y[]="gfg";
    float z=1.2;
    printf("%-5d %5s %f\n",x,y,z);
    printf("%05d \n",x);
    printf("%+5d\n",x);
    return 0;

}