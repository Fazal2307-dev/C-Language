#include<stdio.h>
int main(){
  int age;
  printf("Please enter you age: ");
  scanf("%d",&age);
 if(age>= 18){
  printf("you are eligable for vote");
 }else{
  printf("you are not eligable");
 }
  return 0;
}