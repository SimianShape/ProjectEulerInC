// Problem 4
// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product of two 3-digit numbers.


#include<stdio.h>
#include<string.h>

int main(void)
{
    int x;
    int y;
    int product_string_length = 0;
    int product_value = 0;
    int largest_palindrome_value = 0;
    int largest_palindrome_value_x;
    int largest_palindrome_value_y;
    char product_string[64];
    char reverse_product_string[64];
    char largest_palindrome_string[64];    

    x = 999;
    while(x > 99)
    {
        y = 999;
        while(y > 99)
        {
            product_value = x * y;
            if(product_value > largest_palindrome_value)
            {
                sprintf(product_string,"%d", product_value);
                strcpy(reverse_product_string, product_string);
                strrev(reverse_product_string);
                if(!strcmp(product_string, reverse_product_string))
                {
                    largest_palindrome_value = product_value;
                    largest_palindrome_value_x = x;
                    largest_palindrome_value_y = y;
                    strcpy(largest_palindrome_string, product_string);
                }
                product_string_length = strlen(product_string);
                
            }

            --y;
        }
        --x;
    }

    printf("largest palindrome is %d, created by multiplying %d and %d\r\n", largest_palindrome_value, largest_palindrome_value_x, largest_palindrome_value_y);

    return 0;
}