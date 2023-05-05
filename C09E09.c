// Design a function that receives three grades from a student as parameters and a letter.
// If the letter is "A", the function must calculate the arithmetic mean of the notes of the pupil;
// if it is "P", you should calculate the weighted average, with weights 5, 3 and 2. Return The average calculated for the main program.

#include<stdio.h>
#include<stdlib.h>

double k ()
{
    char w;
    double d,x,y,z;
    scanf("%lf %lf %lf %c",&x,&y,&z,&w);
    if(w == 'A') d = (x+y+z)/3;
    if(w == 'P') d = (x*5+y*3+z*2)/10;
    return printf("%lf\n",d);
}

int main()
{
    k();

    system("pause");
    return 0;
}
