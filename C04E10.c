//Make a program that reads three positive integers and calculates one of the following averages according to a numeric value entered by the user and shown in the following table:
//Number typed          Media
//       1            Geometric
//       2             Weighted
//       3            Harmonica
//       4            Arithmetic

#include <stdio.h>
#include <stdlib.h>

int main(){
    double x,y,z,w;
    printf("Numbers:");
    scanf("%lf%lf%lf",&x,&y,&z);
    printf("Number typed:");
    scanf("%lf",&w);
    if(w==1) printf("%lf",x*y*z);
    else if(w==2) printf("%lf",(x+2*y+3*z)/6);
    else if(w==3) printf("%lf",1/(1/x+1/y+1/z));
    else printf("%lf",(x+y+z)/3);

    system("pause");
    return 0;
}
 
