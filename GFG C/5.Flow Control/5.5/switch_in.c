#include<stdio.h>
int main(){
    int x=0,y=0;
    printf("Enter a choice:\n");
    char c;
    scanf("%c",&c);
    switch(c){
        case 'L':x--;
                break;
        case 'R':x++;
                break;
        case 'U':y++;
                break;
        case 'D':y--;
                 break;
    
        default:printf("Invalid Move");
    }
    printf("%d %d",x,y);
    return 0;
    

}