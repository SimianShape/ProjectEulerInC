// Problem 6
// The sum of the squares of the first ten natural numbers is,
// 1*1 + 2*2...+10*10=385
// The square of the sum of the first ten natural numbers is,
// (1+2+...+10)^2=552=3025
// Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025−385=2640.
// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include<stdio.h>

int main(void)
{
    unsigned long long x = 1;
    unsigned long long y = 1;
    unsigned long long sum_of_the_squares = 0;
    unsigned long long square_of_the_sum = 0;
    unsigned long long difference;

    // calculate the sum of the squares
    while(x < 101)
    {
        sum_of_the_squares += x*x;
        ++x;
    }

    // calculate the square of the sums
    while(y <101)
    {
        square_of_the_sum += y;
        ++y;
    }
    square_of_the_sum *= square_of_the_sum;

    // Find the difference
    difference = square_of_the_sum - sum_of_the_squares;
    printf("The sum of the squares is %llu. The square of the sums is %llu. the difference is %llu", sum_of_the_squares, square_of_the_sum, difference);

    return 0;
}
