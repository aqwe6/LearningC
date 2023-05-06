//  Write a program that contains two integer variables.
//  Compare your addresses ,and display the largest address.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *a = 5;
    int *b =10;
    if(&a > &b) printf("%d\n",&a);
    else printf("%d\n",&b);

    system("Pause");
    return 0;
}
