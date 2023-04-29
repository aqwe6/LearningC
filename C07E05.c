//Make a program that reads a string and reverses it. The inverted string must be stored in the same variable. Then print the inverted string.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char X[10];
    int y,z;
    gets(X);
    for(int i = 0 ; i<= 4 ; i++)
    {
        y = X[i];
        z = X[9-i];
        X[i] = z;
        X[9-i] = y;
    }
    for(int i = 0 ; i<= 9 ; i++)
    {
        printf("%c",X[i]);
    }
    printf("\n");

    system("pause");
    return 0;

}
