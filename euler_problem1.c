// Problem 1
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.


#include<stdio.h>

int divisible_by(int divisor, int value)
{
    if(value%divisor)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}


void main(void)
{
    int sum = 0;
    int x = 0;
    int max_value = 1000;

    while( x < max_value )
    {
        if( divisible_by(3,x) || divisible_by(5,x))
        {
            sum += x;
        }
        ++x;
    }

    printf("Sum = %d\r\n", sum);

}