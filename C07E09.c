// Build a program that reads two strings from the keyboard. Print a message reporting how many times the second string read is contained within the first.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char X[10],Z[10];
    int y=0,w=0,k=0,v=0;
    printf("First String\n");
    gets(X);
    printf("Seconde String\n");
    gets(Z);

    for(int i = 0 ; i<= 9 ; i++)
    {
        if(X[i] == '\0') break;
        w++;

    }
    for(int i = 0 ; i<= 9 ; i++)
    {
        if(Z[i] == '\0') break;
        y++;

    }
    for(int i = 0 ; i<= w-1 ; i++)
    {
        k = 0;
        if(X[i]==Z[0])
        {
            for(int j = 0 ; j<= y-1 ; j ++)
            {
                if(X[j+i]!=Z[j]) break;
                else k++;
            }
        }
        if(k==y) v++;
    }
    printf("%d\n",v);

    system("pause");
    return 0;

}
