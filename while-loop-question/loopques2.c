#include<stdio.h>
void main(){
    //WAP to print Odd number between 1 to n
    int i=1, n;
    printf("Enter the value of n");
    scanf("%d", &n);
    while(i<= n)
    {
        if(i%2!=0){
           printf("%d\n",i);
        }
           i=i+1;

    }
}