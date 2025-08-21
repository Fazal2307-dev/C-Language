#include<stdio.h>
int main(){
    int x = 124;
    printf("%d\n",x);
    printf("%5d\n",x);
    char y[] = "gfg";
    printf("%5c\n",y);
    float z=1.2;
    printf("%5g\n",z);
    printf("% *&",6,y);
    return 0;

}