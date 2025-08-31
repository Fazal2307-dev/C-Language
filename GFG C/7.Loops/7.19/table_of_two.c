#include<stdio.h>
int main(){
    int n,m;
    printf("Enter value of n and m:\n");
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++){
        printf("%d \n",n*i);
       
    }
    return 0;
}