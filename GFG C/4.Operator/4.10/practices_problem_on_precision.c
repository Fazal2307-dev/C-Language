#include<stdio.h>
int main(){
    int a ,x = 1,y=2,z=3;
    a = x,y,z;
    printf("%d\n",a);
    a=(x,y,z);
    printf("%d\n",a);
    int a1 = 10,b=20,c=5;
    int d = (a1<b<c);
    printf("%d\n",d);
    return 0;

}