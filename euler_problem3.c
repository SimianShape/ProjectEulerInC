// Problem 3
// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143

#include<stdio.h>

int main(void)
{

    unsigned long long big_number_to_factor = 600851475143;
    int is_prime = 1;

    printf("factoring %llu\r\n", big_number_to_factor);

    // Check if it is an even number and pull out the 2s
    if((big_number_to_factor%2)==0)
    {
        printf("2 is a prime factor\r\n");
        is_prime = 0;
        big_number_to_factor = big_number_to_factor/2;
        while((big_number_to_factor%2)==0)
        {
            big_number_to_factor = big_number_to_factor/2;
        }
    }

    // Now the odd primes must be tried
    unsigned long long factor = 3;    
    unsigned long long max_factor = big_number_to_factor/2;

    while ((big_number_to_factor > 1) && (factor<=max_factor))
    {
        if((big_number_to_factor%factor)==0)
        {
            is_prime = 0;
            big_number_to_factor = big_number_to_factor/factor;
            printf("%llu is a prime factor\r\n", factor);
            while((big_number_to_factor%factor)==0)
            {
                big_number_to_factor = big_number_to_factor/factor;
            }
            max_factor = big_number_to_factor/2;
        }

        factor += 2;
    }

    if((big_number_to_factor!=1)&&(!is_prime))
    {
        printf("%llu is a prime factor\r\n", big_number_to_factor);
    }
    else if(is_prime)
    {
        printf("%llu is prime\r\n", big_number_to_factor);
    }
    return(is_prime);
}