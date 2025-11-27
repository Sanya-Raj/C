#include<stdio.h>
//WAP to find maximun number from two number
int max(int a, int b);
void main(){
     int a = 100;
     int b = 200;
     int maxvalue;
     maxvalue = max(a,b);
     printf("Max value is : %d\n" ,maxvalue);
}
int max(int a, int b)
{
    if(a>b)
      return a; // return a 
   else
       return b; //return b
}