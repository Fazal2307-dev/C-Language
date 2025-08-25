#include<stdio.h>
void fun(int x){
    if(x == 0)
    return ;
    else{
        printf("%d\n",x);
        fun(x-1);
    }
}
int main(){
    int n;
    printf("Enter value of n:\n");
    scanf("%d",&n);
    fun(n);
    return 0;
}