#include<stdio.h>
//WAP to find factor of a number
void main(){
    int i=1,n;
    printf("Enter n to find factors =");
    scanf("%d:",&n);
    while(i<=n)
    {
        if(n%i==0)
          printf("%d," ,i);
          i=i+1;

    }
}
