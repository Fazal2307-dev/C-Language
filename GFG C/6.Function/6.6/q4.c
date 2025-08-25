#include<stdio.h>
void fun(int x,int y,int z){
    printf("%d %d %d",x,y,z);
}
int main(){
    int i=2;
    fun(++i,++i,++i);
    return 0;

}