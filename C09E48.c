// Write a recursive function that takes an integer value in decimal base and the Print on binary basis.

#include<stdio.h>
#include<stdlib.h>

int k(int x)
{
    int y = 1,z=0;
    while(x>=y)
    {
        y = y * 2;
        z++;
    }
    int a[z];
    int b = 2;
    for(int i = 0 ; i < z ; i++)
    {
        if(i == 0) a[i] = x % b;
        else a[i] = (x % b - (x % (b/2))) / (b/2);
        b = b * 2;

    }
    int g,c = 1;
    for(int i = 0 ; i < z; i++)
    {
        g = g + a[i] * c;
        c = c * 10;
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
