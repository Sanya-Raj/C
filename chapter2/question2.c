#include<stdio.h>
int main (){
    //WAP to check if a number is even or odd 
    int x;
    printf("enter a number : ");
    scanf("%d", &x);
    int y = x % 2 ;
    if (y == 1){
        printf("even number");
    }
    else {
        printf("odd number");

    }

    return 0;

}