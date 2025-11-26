#include<stdio.h>
//WAP to check given number is perfect or not 
void main(){
    int i =1 ,n , sum = 0;
    printf("Enter a number = ");
    scanf("%d", &n);
    while(i<n)
    {
         if(n%i==0)
         {
            printf("%d+ ", i);
            sum=sum+i;
         }
         i=i+1;

    }
        printf("=%d", sum);
        if(sum==n)
         printf("\n%d is a perfect number", n );
     else
       printf("\n%d is not a perfect number", n );

}