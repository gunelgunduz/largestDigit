#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char *argv[])
{
    int number;
    printf(" Enter a number : "); scanf("%d", &number);

    int largest=0;

    while(number>0)
    {
        int temporery = number%10;
        if(largest<temporery)
        largest=temporery;

        number = number/10;
    }

    printf(" Largest Digit : %d", largest);
    return 0;
}