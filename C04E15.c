//Make a program that reads the coefficients of a second-degree equation. In Then calculate and show the roots of this equation, remembering that the roots are calculated
//where Δ = b^2 – 4 * A * C and ax^2 + bx + c = 0 represents an equation of the second degree. The variable a must be nonzero. If it is the same, print the message "Not a second-degree equation." Otherwise, print:
//If • Δ < 0, there is no real. Print the message "There is no root."
//If • Δ = 0 there is a real root. Print the root and the "Single root" message.
//If • Δ > 0, there are two real roots. Print the roots.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c,delta;
    printf("Enter the coefficients of a seconde-degree equation:\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a==0)
    {
        printf("Not a second-degree equation.\n");
    }
    else
    {
        delta = b*b-4*a*c;
        if(delta < 0) printf("There is no root.\n");
        else if(delta == 0) printf("%lf  Single root.",-b/2/a);
        else printf("%lf  %f",(-b+delta)/2/a,(-b-delta)/2/a);
    }

    system("pause");
    return 0;
}
