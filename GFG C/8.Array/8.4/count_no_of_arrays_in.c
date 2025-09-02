#include<stdio.h>
int main(){
    int arr[]={10,20,25,68,78};
    int n= sizeof(arr)/sizeof(arr[0]);
    printf("%d",n);
    return 0;
}