// Problem 5
// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include<stdio.h>

int main(void)
{
    unsigned long long x = 20;

    while(1)
    {
        if(!(x%19))
            if(!(x%18))
                if(!(x%17))
                    if(!(x%16))
                        if(!(x%15))
                            if(!(x%14))
                                if(!(x%13))
                                    if(!(x%12))
                                        if(!(x%11))
                                    {
                                        printf("Largest number divisible by 1-20 is %llu", x);
                                        break;
                                    }

        x += 20;
    }

    return 0;
}
