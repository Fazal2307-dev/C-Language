#include<stdio.h>
int main(){
    float pi=3.14;
    int radius;
    printf("Enter value of radius :");
    scanf("%d",&radius);
    int diameter = 2*radius;
    float circumference = 2* pi *radius;
    float AreaOfCircle = pi*radius*radius;
    printf("diameter of circle: %d\n",diameter);
    printf("circumference of circle : %f\n",circumference);
    printf("AreaOfCircle : %f\n",AreaOfCircle);
    return 0;
}