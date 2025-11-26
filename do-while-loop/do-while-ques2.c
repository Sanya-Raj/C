#include<stdio.h>
// WAP to find factors of a number
void main(){
    int i=1,n;
    printf("Enter a number:");
    scanf("%d", &n);
    do
    {
        if(n%i==0)
        {
            printf("%d,", i);
;        }
            i=i+1;
    }
    while(i<=n);
}