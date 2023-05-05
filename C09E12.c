// Write a function that takes a positive integer and returns the largest prime factor of that number.

#include<stdio.h>
#include<stdlib.h>

int k (int N)
{
    for(int i = N ; i >= 1; i--)
    {
        int j = i-1;
        if(N%i == 0)
        {
            while(i%j != 0) j--;
            if(j == 1) return i;
        }
    }
}

int main()
{
    int a;
    scanf("%d",&a);
    printf("%d\n",k(a));

    system("pause");
    return 0;
}
