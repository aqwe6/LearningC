// Write a recursive function that takes by parameter two integer values x and y and calculate and return the result of x^y for the main program.

#include<stdio.h>
#include<stdlib.h>

int k(int x , int y)
{
    if(y == 0) return 1;
    else return x * k(x,y-1);
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",k(a,b));

    system("pause");
    return 0;
}
