// Write a program that reads a string from the keyboard and converts all your uppercase characters. Tip: Subtract 32 from the characters whose ASCII code is between 97 and 122.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char X[10];
    int y=0,w=0,k=0,v=0;
    gets(X);
    for(int i = 0 ; i<= 9 ; i++)
    {
        if(X[i] == '\0') break;
        w++;

    }
    for(int i = 0 ; i<= w-1 ; i++)
    {
        if(X[i]>96 && X[i]<123) X[i] = X[i] - 32;
    }
    printf("%s\n",X);

    system("pause");
    return 0;

}
