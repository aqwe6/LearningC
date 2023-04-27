//Design a program that reads two integers and displays the result of the "or exclusive," "or bit-by-bit," and "and bit-by-bit" operations between them.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n%d\n%d\n",a^=b,a|=b,a&=b);
    system("pause");
}
