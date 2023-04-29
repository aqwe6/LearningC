// Make a program that reads a string and prints a message saying if it it's a palindrome or not.
// A palindrome is a word that has the property of being able to be read both from right to left and from left to right.
// Examples: egg, macaw, reverse, wing, bone etc.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char X[10],z;
    int y=0,w=0;
    gets(X);

    for(int i = 0 ; i<= 9 ; i++)
    {
        if(X[i] == '\0') break;
        w++;

    }
    for(int i = 0 ; i<= w-1 ; i++)
    {
        if(X[i] == X [w-i-1]) y++;
    }
    if(y == w) printf("Palindrome\n");
    else printf("Not Palindrome\n");

    system("pause");
    return 0;

}
