//Make a program that reads a value of type double and then prints it in the shape of scientific notation.

#include<stdio.h>
#include<stdlib.h>

int main(){
    double x;
    scanf("%f",&x);
    printf("%e\n",x);

    system("pause");
    return 0;
}
