// Make a function that calculates and returns the Neperian number e, e = 2.71828183, using the following series:
// e = 1/0! + 1/1! + 1/2! + 1/3!...
// The function must have as a parameter the number of terms that will be summed, N. Note that the higher that number, the closer to the value and the answer will be.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double k (double N)
{
    if(N == 1 || N == 2) return 1;
    else return k(N-1)/(N-1);
}

int main()
{
    double a,s = 0;
    scanf("%lf",&a);
    for(int i = 1 ; i <= a ; i++) s = s + k(i);
    printf("%lf\n",s);

    system("pause");
    return 0;
}
