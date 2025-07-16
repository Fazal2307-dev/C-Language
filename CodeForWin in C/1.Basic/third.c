// Write a C program to input length and width of a rectangle and calculate 
// perimeter of the rectangle

#include<stdio.h>
int main(){

    int length,breadth;
    printf("Enter value of length:");
    scanf("%d",&length);
    printf("Enter value of breadth:");
    scanf("%d",&breadth);
    int perimeterOfRectangle =  2 * (length + breadth);
    printf("%d",perimeterOfRectangle);

    return 0;
}