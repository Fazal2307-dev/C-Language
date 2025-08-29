#include<Stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n % i==0){
            printf("%d",i);
            break;
        }
    }
    return 0;
}