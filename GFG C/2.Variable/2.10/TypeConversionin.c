#include<stdio.h>
#include<stdbool.h>
int  main(){
    float a =  0.5;
    printf("%2f\n",a);
    int b =a;
    printf("%d\n",b);
    if(b == 0){
         bool c = b;
    printf("%s\n",c ? "True":"False");
    };
   
    return 0;

}