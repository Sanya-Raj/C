#include<stdio.h>
// WAP to print reverse a number
void main(){
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    do
    {
        printf("%d", n%10);
        n=n/10;
;        }
    while(n!=0);
}