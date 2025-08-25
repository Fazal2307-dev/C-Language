#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter value of a,b and c:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("A is bigger than all of you");

    }else if(b>a && b>c){
        printf("B is bigger than all of you");
    }
    else
    printf("C is  bigger than all you");
    return 0;
}


