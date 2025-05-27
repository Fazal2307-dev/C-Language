#include<stdio.h>
int main(){
  int a,b,x,y,z;
  printf("please provide value of b x y z:\n");
  scanf("%d %d %d %d",&b,&x,&y,&z);
 a= z/b+b * x-y;
 printf("Print the value of a:%d",a);
 return 0;
}