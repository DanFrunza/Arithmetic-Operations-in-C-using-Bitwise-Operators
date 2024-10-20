#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "functions.h" 


void showBinaryNumber(int number)
{
    int numBits = sizeof(int) * 8;
    int bit;
    int counter=0;

    for(int i = numBits -1; i >= 0; i--)
    {
        counter++;
        bit = (number >> i) & 1;
        printf("%d", bit);
        if(counter == 4)
        {
            printf(" ");
            counter = 0;
        }
    }
}

int add(int a, int b)
{
    int carry;
    while(b != 0)
    {
        carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }

    return a;
}

int subtract(int a, int b) 
{
    
    return add(a, add(~b, 1)); 

}

int multiply(int a, int b)
{
    int result = 0;
    while(b != 0)
    {
        if(b & 1)
        {
            result += a;
        }
        a <<= 1;
        b >>= 1;
    }

    return result;
}

int divide(int dividend, int divisor) {
    int quotient = 0;
    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;  

    
    dividend = abs(dividend);
    divisor = abs(divisor);

    
    for (int i = 31; i >= 0; i--) {
        if ((dividend >> i) >= divisor) {
            dividend -= (divisor << i);
            quotient |= (1 << i);  
        }
    }

    return quotient * sign;  //Apply the result sign
}

int modulo(int divident, int divisor)
{
    int quotient = divide(divident, divisor);
    return subtract(divident, multiply(quotient, divisor));
}
