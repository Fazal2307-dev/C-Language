#include<stdio.h>
int main(){
int arr[]={20,40,60,80};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
    arr[i] =arr[i]*2;
    printf("%d,",arr[i]);
}
return 0;
}