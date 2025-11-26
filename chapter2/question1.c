#include<stdio.h>
int main (){
    //WAP to check if a number is divisible by 2 or not 
    int x;
    printf("enter a number : ");
    scanf("%d", &x);
    int y = x % 2 ;
    if (y == 1){
        printf("not divisible by 2");
    }
    else {
        printf("divisible by 2");

    }

    return 0;

}