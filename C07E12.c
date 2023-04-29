// Write a program that reads the name and value of a particular commodity from a store.
// Knowing that the discount for cash payment is 10% on the value total, calculate the amount to be paid in cash.
// Write the name of the commodity, the value total, the amount of the discount and the amount to be paid in cash.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char name[100];
    double val;
    printf("Name : ");
    gets(name);
    printf("Value : ");
    scanf("%lf",&val);
    printf("name : %s \n",name);
    printf("value total : %lf \n",val);
    printf("discount : %lf \n",val*0.1);
    printf("paid in cash : %lf \n",val*0.9);

    system("pause");
    return 0;

}
