// Write a function that receives a positive integer n. Calculate and return the sum from 1 to n: 1 + 2 + 3 + ... + n.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int k (int n)
{
   if(n == 1) return 1;
   else return k(n-1)+n;
}

int main()
{
    int a;
    scanf("%d",&a);
    printf("%d\n",k(a));

    system("pause");
    return 0;
}
