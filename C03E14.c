//Make a program that converts an uppercase letter to a lowercase letter. Use the ASCII table for this.

#include<stdio.h>
#include<stdlib.h>

int main(){
    char a;
    printf("Convert uppercase letter to lowercase letter?");
    scanf("%c",&a);

    printf("%c",a+32);

    system("pause");
}
