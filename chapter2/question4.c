#include<stdio.h>
// WAP to check the average of 3 number
int main(){
    float x,y,z ;
    printf("enter a number x = ");
    scanf("%f", &x);
    printf("enter a number y = ");
    scanf("%f", &y);
    printf("enter a number z = ");
    scanf("%f", &z);
     
    printf("%2f is answer \n ", (x+y+z)/3);
    return 0 ;
}