// Create a function that takes two parameters: a vector and a value of the same type of the vector.
// The function must fill the vector elements with this value. No Use indexes to cycle through the vector, pointer arithmetic only.

#include<stdio.h>
#include<stdlib.h>

char k(char x[50],char y)
{
    char *c = x;
    int s=0,v=0,i=0,j=0;
    for(int i=0; x[i]!='\0' ; i++) *(x+i)=y;
    printf("%s\n",x);
}

int main()
{
    char a[50],b;
    gets(a);
    b=getchar();
    k(a,b);
    system("pause");
    return 0;
}
