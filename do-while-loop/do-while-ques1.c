#include<stdio.h>
// WAP to print Odd number 1 to n 
void main(){
    int i=1,n;
    printf("Enter a number:");
    scanf("%d", &n);
    do
    {
        if(i%2!=0)
        {
            printf("%d,", i);
;        }
            i=i+1;
    }
    while(i<=n);
}