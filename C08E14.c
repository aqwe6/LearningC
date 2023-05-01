// Create an enumeration representing the items in a shopping list.
// Now Write a program that reads an integer value from the keyboard and displays the name of the item purchased and its price.

#include<stdio.h>
#include<stdlib.h>

enum list {a,b,c};

int main()
{
    enum year s;
    scanf("%d",&s);
    if(s==1) printf("a 31\n");
    else if(s==2) printf("b 28\n");
    else printf("c 3\n");

    system("pause");
    return 0;

}
