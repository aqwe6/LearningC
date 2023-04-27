//Make a program that shows the user a menu with four options for mathematical operations (the basic operations, for example). The user chooses a of the options, and your program asks for two numerical values and performs the operation, showing the result.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b;
    char c;
    printf("+  -  *  / \n");
    printf("Choose");
    c = getchar();
    printf("Enter two numbers:\n");
    scanf("%lf %lf",&a,&b);
    switch(c)
    {
    case '+':
        printf("%lf\n",a+b);
        break;
    case '-':
        printf("%lf\n",a-b);
        break;
    case '*':
        printf("%lf\n",a*b);
        break;
    default :
        printf("%lf\n",a/b);
        break;
    }

    system("pause");
    return 0;
}
