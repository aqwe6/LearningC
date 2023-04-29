//Without using the strlen() function, make a program that reads a string and prints how many characters it has.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char X[1000];
    int y=0;
    gets(X);
    for(int i = 0; i<=1000 ; i++)
    {
        if(X[i] == '\0'){
                printf("%d\n",i);
                break;
        }
    }


    system("pause");
    return 0;
}
