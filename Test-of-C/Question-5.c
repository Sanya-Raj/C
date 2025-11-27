#include<stdio.h>
int main(){
    int a=11,b=14,c,d,e,f;
    e=++a;
    c=++a + ++a;
    d=++a + ++a + a++;
    printf("%d", d);

}
