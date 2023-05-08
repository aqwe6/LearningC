// Elaborate a function that takes two strings as parameters and verify that the second string occurs within the first.
// Use pointer arithmetic to access the characters of the strings.

#include<stdio.h>
#include<stdlib.h>

char k(char x[50],char y[50])
{
    char *c = x;
    char *d = y;
    int s=0,v=0,i=0,j=0;
    while(y[i]!='\0')
    {
        v++;
        j=i;
        while(x[j]!='\0')
        {
            if(*(y+i)==*(x+j))
            {
                s++;
                break;
            }
            j++;
        }
        i++;
    }
    if(v==s) printf("Yes\n");
    else printf("No\n");
}

int main()
{
    char a[50],b[50];
    gets(a);
    gets(b);
    k(a,b);
    system("pause");
    return 0;
}
