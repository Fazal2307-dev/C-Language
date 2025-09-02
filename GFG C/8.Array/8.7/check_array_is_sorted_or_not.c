#include<stdio.h>
int sorted(int a[],int n){
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            return 0;
        }
    }
    return 1;
}




int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    if(sorted(a,n)){
        printf("Sorted\n");
    }else{
        printf("Not Sorted\n");
    }
    return 0;
}