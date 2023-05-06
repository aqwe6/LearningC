//  Write a program that contains two integer variables.  Read variables from keyboard.
//  Then compare your addresses and display the contents of the largest address.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *a;
    int *b;
    scanf("%d %d",&a,&b);
    if(&a > &b) printf("%d\n",&a);
    else printf("%d\n",&b);

    system("Pause");
    return 0;
}
