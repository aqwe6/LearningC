// Make a program that reads a string and prints it on the screen.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[1000];
    gets(str);
    printf("%s",str);

    system("Pause");
    return 0;
}
