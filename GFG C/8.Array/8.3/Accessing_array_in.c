#include<Stdio.h>
int main(){
    int arr[3]={10,20,30};
    printf("%d %d \n",arr[2],arr[0]);
    arr[2]=40;
    printf("%d %d\n",arr[2],arr[0]);
    for(int i=0;i<3;i++){
        printf("%d,",arr[i]);
    }
    return 0; 
}