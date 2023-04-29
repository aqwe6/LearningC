//Make a program that reads a string and prints it backwards.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char X[100];
    int y=0;
    gets(X);
    for(int i = 0 ; i<= 99 ; i++)
    {
        y++;
        if(X[i] == '\0') break;
    }

    for(int j = y-2 ; j >= 0 ; j--)
    {
        printf("%c",X[j]);
    }
    printf("\n");

    system("pause");
    return 0;
}
