// Create a function that receives a string and returns the pointer to that inverted string.

#include<stdio.h>
#include<stdlib.h>

char X(char N[50])
{
    int k=0;
    int d,e;
    for(int i=0;N[i]!='\0';i++) k++;
    k = k-1;
    for(int i=0;i<=(k/2);i++)
    {
        d = N[i];
        e = N[k-i];
        N[k-i] = d;
        N[i] = e;
    }
    char *p;
    p = N;
    return printf("%s\n",*p);
}

int main()
{
    char l[50];
    gets(l);
    X(l);

    system("Pause");
    return 0;
}
