#include<stdio.h>
int countDistinct(int a[],int n){
    int count=0;
    int isDistinct=1;
    for(int i=0;i<n;i++){
        isDistinct=1;
        for(int j=i-1;j>=0;j--){
            if(a[i]==a[j]){
                isDistinct=0;
                break;
            }
        }
        if(isDistinct==1)
        count++;
    }
    return count;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("%d",countDistinct(a,n));
    return  0;
}