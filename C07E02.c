// Make a program that reads a string and prints the first four letters of it.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[100];
    gets(str);
    str[4] = "\0";
    printf("%s",str);

    system("pause");
    return 0;
}
