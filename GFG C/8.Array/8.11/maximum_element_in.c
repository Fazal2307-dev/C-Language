#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int maxi=a[0];
for(int i=1;i<=n;i++){
    if(a[i]>maxi)
    maxi=a[i];
}
printf("%d",maxi);
return 0;
}