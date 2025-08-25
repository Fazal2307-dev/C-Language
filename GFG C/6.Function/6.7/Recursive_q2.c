#include<Stdio.h>
void fun(int x){
    if(x == 0)
    return ;
    else{
        fun(x-1);
        printf("%d\n",x);
    }
}


int main(){
    int n;
    printf("Enter value of n:\n");
    scanf("%d",&n);
    fun(n);
    return 0;
}