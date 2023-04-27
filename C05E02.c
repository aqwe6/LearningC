//Make a program that reads a positive integer N and prints all the natural numbers from 0 to N in descending order.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i = n; i > 0 ; i--) printf("%d\n",i);
    system("pause");
    return 0;
}
