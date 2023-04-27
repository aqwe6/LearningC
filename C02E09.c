//Make a program that reads two float-type values. Use a single reading for that. Then print the read values in the reverse order in which they were read.

#include<stdio.h>
#include<stdlib.h>

int main(){
    float a,b;
    scanf("%f %f",&a,&b);
    printf("%f %f",b,a);

    system("pause");
    return 0;
}
