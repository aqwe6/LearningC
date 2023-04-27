// Make a program that reads a value in reais and the dollar quote. Then Print the corresponding amount in dollars.

#include<stdio.h>
#include<stdlib.h>

int main(){
    float x,y;
    printf("Convert reais to dolar\nreais\n?");
    scanf("%f",&x);
    printf("Dollar quote?\n");
    scanf("%f",&y);
    printf("%f dollars\n",x/y);

    system("pause");
}
