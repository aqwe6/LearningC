// Write a recursive function that takes a positive integer n. Calculate and Return your factorial n!:
// n! = n * (n – 1) * (n – 2) * ... * 1

#include<stdio.h>
#include<stdlib.h>

int k (int N)
{
    if(N == 0) return 1;
    else return N*k(N-1);
}

int main()
{
    int h;
    scanf("%d",&h);
    printf("%d",k(h));

    system("pause");
    return 0;
}
