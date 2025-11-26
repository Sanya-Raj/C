#include<stdio.h>
// WAP to find factors of a number 
void main()
{
    int i,n;
    printf("Enter n to find factors=");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
          printf("%d,", i);

    }
         return 0;
}