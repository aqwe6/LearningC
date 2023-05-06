// The multiplication of two integers can be done through successive sums (for example, 2 * 3 = 2 + 2 + 2).
// Create a recursive function that calculates the multiplication by successive sums of two integers.

#include<stdio.h>
#include<stdlib.h>

int k(int x , int y)
{
    if(y == 0) return 0;
    else if(y > 0) return x + k(x,y-1);
    else if(y < 0) return x - k(x,1-y);
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",k(a,b));

    system("pause");
    return 0;
}
