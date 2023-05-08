// Consider the following statement: int a,*b,**c,***d.
// Write a program that reads variable a and calculate and display double, triple, and quadruple this value using Only the pointers B, C, and D.
// Pointer B should be used to calculate double, c, o triple, and d, the quadruple.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    scanf("%d",&a);
    int *b=&a;
    printf("%d\n",*b*2);
    int **c=&b;
    printf("%d\n",**c*3);
    int ***d=&c;
    printf("%d\n",***d*4);

    system("pause");
    return 0;
}
