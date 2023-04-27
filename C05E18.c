// Make a program that receives an integer greater than 1 and verify that the number provided is prime or not.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y=0,z=0;
    scanf("%d",&x);
    if(x>1){
        for(int i=2 ; i<=x-1 ; i++){
            if(x%i==0){
                printf("Not Prime\n");
                break;
            }
            else z++;
        }

    }
    if(z==x-2) printf("Prime\n");
    system("pause");
    return 0;
}
