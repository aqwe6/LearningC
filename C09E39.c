// Create a recursive function that takes an integer N and prints all the natural numbers from 0 to N in ascending order

#include<stdio.h>
#include<stdlib.h>

int k (int N)
{
    if(N == 0) return 0;
    else return k(N-1) + 1;
}

int main()
{
    int a;
    scanf("%d",&a);
    for(int i = 0; i <= a; i++) printf("%d\n",k(i));


    system("pause");
    return 0;
}
