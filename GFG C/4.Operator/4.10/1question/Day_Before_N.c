#include<stdio.h>
int main(){
    int d=0;
    int n;
    printf("Enter value of n:\n");
    scanf("%d",&n);
    int mod_res = n%7;
    int sub_res = d-mod_res;
    if(sub_res>=0){
        printf("%d\n",sub_res);
    }
    else{
        sub_res = sub_res+7;
        printf("%d",sub_res);
    }
    return 0;
}