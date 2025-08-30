#include<stdio.h>
int main(){
    for(int i=0;i<2;i++){
        int j=1;
        while(j<3){
            printf("%d %d \n",i,j);
            j++;
        }
        printf("GFG");
    }
    return 0;
}