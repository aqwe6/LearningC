//Make a program to read a three-digit positive integer. Then calculate and show the number formed by the inverted digits of the number read.
//Example:
//Number read = 123
//Number generated = 321

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    scanf("%d",&a);
    printf("%d\n",a%10+(a%100-a%10)/10+(a-a%100)/100);

    system("pause");
}
