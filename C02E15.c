//Write a program that reads three variables: char, int, and float.Then print them in three different ways: separated by spaces, by a horizontal tab, and one on each line. Use a single printf() command for each write operation of the three variables

#include<stdio.h>
#include<stdlib.h>

int main(){
    char x;
    int y;
    float z;
    scanf("%c %d %f",&x,&y,&z);

    printf("%c\n____________________________________________________________________\n",x);
    printf("%d\n____________________________________________________________________\n",y);
    printf("%f\n____________________________________________________________________\n",z);

    system("pause");
    return 0;
}
