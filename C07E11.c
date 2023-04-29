// Write a program that reads a string from the keyboard and converts all its characters to lowercase. Tip: Add 32 of the characters whose ASCII code is between 65 and 90.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char X[10];
    gets(X);
    for(int i = 0 ; i<= 9 ; i++)
    {
        if(X[i] == '\0') break;
        w++;

    }
    for(int i = 0 ; i<= w-1 ; i++)
    {
        if(X[i]>64 && X[i]<91) X[i] = X[i] + 32;
    }
    printf("%s\n",X);

    system("pause");
    return 0;

}
