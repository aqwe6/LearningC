// Read a speed in km/h (kilometers per hour) and present converted to m/s (meters per second). The conversion formula is M = K/3.6, where K is the speed in km/h and M is the speed in m/s.

#include<stdio.h>
#include<stdlib.h>

int main(){
    float x;
    printf("Convert km/h to m/s\nkm/h?");
    scanf("%f",&x);
    printf("%f is m/s\n",x/3.6);

    system("pause");
}
