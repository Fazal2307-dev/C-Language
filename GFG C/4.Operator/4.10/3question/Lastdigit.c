#include<stdio.h>
int main(){
    int n;
    printf("Enter value:\n");
    scanf("%d",&n);
    int ans ;
    if(n<0){
        ans = -(n%10);
    }else{
        ans = (n%10);
    }
    printf("%d",ans);
    return 0;
}