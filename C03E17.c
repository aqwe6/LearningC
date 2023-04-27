//Write a program that reads an integer and shows your add-on bit by bit.

#include<stdio.h>
#include<stdlib.h>

int main(){
    unsigned char a,b;
    scanf("%d",&a);
    b =~a;
    printf("%d\n",b);
    system("pause");
}
