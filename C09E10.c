// Write a function that takes two numeric values and a symbol. This symbol will represent the operation you want to perform with the numbers.
// Thus, if the symbol is "+", an addition must be made, if it is "−", a subtraction, if it is "/", a division, and if it is "*", a multiplication is performed.
// Return the result of the operation to the main program.

#include<stdio.h>
#include<stdlib.h>

double k ()
{
    char w;
    double d,x,y;
    scanf("%lf %lf %c",&x,&y,&w);
    if(w == '+') d = (x+y);
    if(w == '-') d = (x-y);
    if(w == '*') d = (x*y);
    if(w == '/') d = (x/y);
    return printf("%lf\n",d);
}

int main()
{
    k();

    system("pause");
    return 0;
}
