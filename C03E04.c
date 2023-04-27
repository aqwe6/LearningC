//Read four float-type values. Calculate and display the arithmetic mean of these values.

#include<stdio.h>
#include<stdlib.h>

int main(){
    float x,y,z,w;
    scanf("%f%f%f%f",&x,&y,&z,&w);
    printf("%f\n",(x+y+z+w)/4);

    system("pause");
}
