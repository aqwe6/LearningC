// Write a program that takes a string S and two non-negative integer values i and j. Then print the characters contained in the segment that goes from i to jof the string S.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char name[100];
    double val1,val2;
    printf("String : ");
    gets(name);
    printf("Tw0 no-negative Interger : \n");
    scanf("%lf",&val1);
    while (val1 < 0)
    {
        printf("Enter no-negative Interger : \n");
        scanf("%lf",&val1);
    }
    scanf("%lf",&val2);
    while (val2 < 0)
    {
        printf("Enter no-negative Interger : \n");
        scanf("%lf",&val2);
    }
    for(int i = val1-1 ; i <= val2-1 ; i++) printf("%c",name[i]);
    printf("\n");
    system("pause");
    return 0;

}
