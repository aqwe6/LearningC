// Write a recursive function that calculates the sum of the first n cubes:
// S = 1^3 + 2^3 + ... + n^3

#include<stdio.h>
#include<stdlib.h>

int k (int N)
{
    if(N == 1) return 1;
    return N*N*N + k(N-1);
}

int main()
{
    int a;
    scanf("%d",&a);
    printf("%d\n",k(a));

    system("pause");
    return 0;
}
