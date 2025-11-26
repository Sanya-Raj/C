#include<stdio.h>
// WAP to check if given ccharacter is in upper case or lower case 
int main(){
    char ch;

    printf("Enter a character :");
    scanf("%c", &ch);

    if (ch>='a' && ch <='z') {
        printf("its a lower case");
    }
    else if(ch >= 'A' && ch <= 'Z') {
        printf("it's a upper case");
    }

    return 0;
    }
    
