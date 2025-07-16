// Write a C program to input length and width of a rectangle and find area of the given rectangle.

#include<stdio.h>
int main(){
    int length,breadth;
    printf("Enter value of length: ");
    scanf("%d",&length);
    printf("Enter value of breadth: ");
    scanf("%d",&breadth);
    int areaOfRectangle = length * breadth;
    printf("AreaOfRectangle is %d", areaOfRectangle);
 return 0;
}
