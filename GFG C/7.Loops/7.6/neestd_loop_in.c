#include<stdio.h>
int main(){
    int n;
    printf("Enter n:\n");
    scanf("%d",&n);
    for(int x=1;x<=n;x++){
    for(int i=1;i<=10;i++){
        printf("%d ",n*i);
    }
    return 0;
}