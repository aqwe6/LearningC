// Write a function that takes a string and returns if it is a palindrome (1) or not (0).
// A palindrome is a word that has the property of being able to be read both from right to left and from left to right.
// Examples: egg, macaw, rever, wing, bone etc.

#include<stdio.h>
#include<stdlib.h>

void k(char X[1000])
{
    int j = 0,d=0;
    while(X[j] != '\0') j++;
    for(int f=0 ; f < j ; f++) if(X[f] == X[j-f-1]) d++;
    if(j == d) printf("1\n");
    else printf("0\n");
}

int main()
{
    char A[1000];
    scanf("%s",A);
    k(A);

    system("pause");
    return 0;
}
