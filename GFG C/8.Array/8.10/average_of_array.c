#include<stdio.h>
double average(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum = sum+a[i];
    }
    n=(double)n;
    return sum/n;
}


int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("%f",average(a,n));
}