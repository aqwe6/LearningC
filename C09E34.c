//  Elaborate a function that takes by parameters the coefficients of an equation of the high school. Then calculate and show the roots of this equation.
// Remember to that the roots are calculated as
// x = (-b +- sqrt(Δ))/(2*a)
// where Δ = b^2 – 4 * a * c and ax^2 + bx + c = 0 represents an equation of the second degree. The variable a must be nonzero.
// If it is the same, print the message "Not a second-degree equation" and return the value −1. Otherwise, Return the number of roots and roots (by reference) if they exist:
// If • Δ < 0, there is no real. Number of roots: 0.
// If • Δ = 0, there is a real root. Number of roots: 1.
// If • Δ > 0, there are two real roots. Number of roots: 2

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double k(double *a,double *b,double *c)
{
    double d = *b**b - 4**a**c;
    if(*a == 0) printf("Not a second-degree equation\n-1\n");
    else if(d < 0) printf("Number of roots: 0.\n");
    else if(d == 0) printf("Number of roots: 1.\n%lf",-*b/(2**a));
    else printf("Number of roots: 2.\n%lf\n%lf",(-*b+sqrt(d))/(2**a),(-*b-sqrt(d))/(2**a));
}

int main()
{
    double x,y,z;
    scanf("%lf %lf %lf",&x,&y,&z);
    k(&x,&y,&z);


    system("pause");
    return 0;
}
