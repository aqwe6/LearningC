//Make a program that reads an integer N and then prints the first odd natural numbers N

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n ; i=i+2) printf("%d\n",i);
    system("pause");
    return 0;
}
