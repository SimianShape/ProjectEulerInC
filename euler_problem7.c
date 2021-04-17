// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can
// see that the 6th prime is 13. What is the 10001st prime number?

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int number_of_primes_to_find = atoi(argv[1]);
    int number = 1;

    printf("\nFinding %d Primes\n", number_of_primes_to_find);

    for(int i = 0; i <= number_of_primes_to_find;)
    {
        number += 1;
        int half_of_number = number/2;
        int t;
        for(t = 2; t < half_of_number; t++)
        {
            if(number%t == 0)
                break;
        }

        if(t >= half_of_number)
        {
            printf("%d is prime\n", number);
            ++i;
        }

    }

    return 0;
}
