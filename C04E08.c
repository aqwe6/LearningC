//Write a program that, given a swimmer's age, classifies him or her in one of the following categories:Age Category
//Infant A 5-7
//Infant B 8-10
//Juvenile A 11-13
//Juvenile B 14-17
//Senior over 18 years old

#include <stdio.h>
#include <stdlib.h>

int main(){
    int d;
    printf("Age:");
    scanf("%d",&d);
    if(d>4 && d<8) printf("Infant A\n");
    if(d>7 && d<11) printf("Infant B\n");
    if(d>10 && d<14) printf("Juvenil A\n");
    if(d>13 && d<18) printf("Juvenil B\n");
    if(d>18) printf("Senior");

    system("pause");
    return 0;
}
