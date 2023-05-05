// Create a recursive function that takes an integer N and returns the sum of the numbers 1 to N.

#include<stdio.h>
#include<stdlib.h>

int k (int N)
{
    if(N == 1) return 1;
    return N + k(N-1);
}

int main()
{
    int a;
    scanf("%d",&a);
    printf("%d\n",k(a));

    system("pause");
    return 0;
}
