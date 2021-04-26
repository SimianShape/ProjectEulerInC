// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
//
// a2 + b2 = c2
// For example, 32 + 42 = 9 + 16 = 25 = 52.
//
// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int a = 0, b = 0, c = 0;

    // Brute force it with 3 nested loops
    for(c = 0; c < 1000; c++)
    {
        for(b = 0; b < 1000; b++)
        {
            for(a = 0; a < 1000; a++)
            {
                if(((a + b + c) == 1000) && ((a*a + b*b) == (c * c)) && ( a < b) && (b < c))
                {
                    printf("\nThe product of %d, %d, and %d is %d \n", a, b, c, a*b*c);

                }
            }
        }
    }
    return 0;
}
