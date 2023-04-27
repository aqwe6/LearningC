//Make a program that shows a countdown on the screen, starting at 10 and ending in 0. Show an "END!" message after the count.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i = 10; i > 0 ; i--)
    {
      printf("%d\n",i);
    }
    printf("END!");
    system("pause");
    return 0;
}
