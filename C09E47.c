// Write a recursive function that takes an integer value and returns it reversed. Example:
// Number read = 123.
// Number returned = 321.

#include<stdio.h>
#include<stdlib.h>

int k(int x)
{
    int y = 1,z=0;
    while(x>=y)
    {
        y = y * 10;
        z++;
    }
    int a[z];
    int b = 10;
    for(int i = 0 ; i < z ; i++)
    {
        if(i == 0) a[i] = x % b;
        else a[i] = (x % b - (x % (b/10))) / (b/10);
        b = b * 10;

    }
    int g,c = 1;
    for(int i = z -1 ; i >= 0; i--)
    {
        g = g + a[i] * c;
        c = c *10;
    }
    return g;
}

int main()
{
    int h;
    scanf("%d",&h);
    printf("%d\n",k(h));

    system("pause");
    return 0;
}
