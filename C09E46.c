//Write a recursive function that receives an integer, greater than or equal to zero, and returns the nth term of the Fibonacci sequence.
//This sequence begins at the zero-order term, and from the second term, its value is given by the sum of the previous two terms.
//Some terms in this sequence are: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.

#include<stdio.h>
#include<stdlib.h>

int k (int N)
{
    if(N == 0) return 0;
    if(N == 2 || N== 1) return 1;
    else return k(N-1) + k(N-2);
}

int main()
{
    int x;
    scanf("%d",&x);
    printf("%d",k(x));

    system("pause");
    return 0;
}
