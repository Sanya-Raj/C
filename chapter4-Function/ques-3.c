#include<stdio.h>
//WAP to calculate the power of a number 
int power(int , int);
void main()
{
    int num, pow, res;
    printf("Enter any number :");
    scanf("%d", &num);
    printf("Enter power of number :");
    scanf("%d", &pow);
    res = power(num, pow);
    printf("%d's power %d = %d", num, pow, res);
}
int power(int n, int p)
{
    int r = 1;
    while (p >=1)
    { 
        r = r*n;
        p--;
    }
    return r;
}