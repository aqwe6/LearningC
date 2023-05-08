// Create a function that takes a vector as a parameter and prints it. Do not use indexes to traverse the vector, only pointer arithmetic.

#include<stdio.h>
#include<stdlib.h>

char k(char x[50])
{
    char *c = x;
    for(int i=0; x[i]!='\0' ; i++) printf("%c\n",*(x+i));
}

int main()
{
    char a[50];
    gets(a);
    k(a);
    system("pause");
    return 0;
}
