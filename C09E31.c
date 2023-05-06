// Write a function that takes a string and converts all its characters in all caps. Tip: Subtract 32 from characters whose ASCII code is between 97 and 122.

#include<stdio.h>
#include<stdlib.h>

void k(char X[1000])
{
    int j = 0,d=0;
    while(X[j] != '\0') j++;
    for(int f=0 ; f < j ; f++) if(X[f]>96 && X[f]<123) X[f] = X[f] - 32;
    printf("%s\n",X);
}

int main()
{
    char A[1000];
    scanf("%s",A);
    k(A);

    system("pause");
    return 0;
}
