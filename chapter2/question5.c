#include<stdio.h>
// WAP to check if given character is digit or not
int main(){
    char ch;

    printf("Enter a character :");
    scanf("%c", &ch);

    if (ch>='a' && ch <='z') {
        printf("its not a digit");
    }
    else if(ch >= 'A' && ch <= 'Z') {
        printf("it's not a digit");
    }
    else{
        printf("Its a digit");
    }

    return 0;
    }
    
