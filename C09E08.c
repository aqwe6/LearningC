// Elaborate a function to verify that a number is a perfect square. One Perfect square is a non-negative integer that can be expressed as the square of another integer. Examples: 1, 4, 9.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int k (int z)
{
    if(z > 0)
    {
        for(int i = 1 ; i<=z ; i++)
        {
            if(z == i*i) return printf("Yes\n");
        }
    }
    return printf("No\n");
}

int main()
{
    int x;
    scanf("%d",&x);
    k(x);

    system("pause");
    return 0;
}
