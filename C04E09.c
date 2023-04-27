//Make a program that reads a person's height and weight. According to the Table below, check and show what the classification of this person is.
//
//    Height                           Weight
//                 Up to 60    Between 60-90(inclusive)     Over 90
//Less than 1.20      A                   D                    G
//1.20-1.70           B                   E                    H
//Greater than 1.70   C                   F                    I


#include <stdio.h>
#include <stdlib.h>

int main(){
    double h,w;
    printf("Height:");
    scanf("%lf",&h);
    printf("Weight:");
    scanf("%lf",&w);
    if(h<1.2){
        if(w<60) printf("A\n");
        else if(w<=90) printf("D\n");
        else printf("G\n");
    }
    else if(h<=1.7){
        if(w<60) printf("B\n");
        else if(w<=90) printf("E\n");
        else printf("H\n");
    }
    else {
        if(w<60) printf("C\n");
        else if(w<=90) printf("F\n");
        else printf("I\n");
    }

    system("pause");
    return 0;
}
