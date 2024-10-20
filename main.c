#include <stdio.h>
#include <math.h>
#include "functions.h"


int main ()
{
    int a =21;
    int b = 5;
    printf("\nNumber %d in binary is: ", a);
    showBinaryNumber(a);
    printf("\nNumber %d in binary is: ", b);
    showBinaryNumber(b);
    int result = add(a,b);
    printf("\nAddition result %d in binary is: ", result);
    showBinaryNumber(result);
    printf("\n\n");
   
    printf("\nNumber %d in binary is: ", a);
    showBinaryNumber(a);
    printf("\nNumber %d in binary is: ", b);
    showBinaryNumber(b);
    result = subtract(a,b);
    printf("\nSubstract result %d in binary is: ", result);
    showBinaryNumber(result);
    printf("\n\n");
 
    printf("\nNumber %d in binary is: ", a);
    showBinaryNumber(a);
    printf("\nNumber %d in binary is: ", b);
    showBinaryNumber(b);
    result = multiply(a,b);
    printf("\nMultiply result %d in binary is: ", result);
    showBinaryNumber(result);
    printf("\n\n");
  
    printf("\nNumber %d in binary is: ", a);
    showBinaryNumber(a);
    printf("\nNumber %d in binary is: ", b);
    showBinaryNumber(b);
    result = divide(a,b);
    printf("\nDivide result %d in binary is: ", result);
    showBinaryNumber(result);
    result = modulo(a,b);
    printf("\nModulo result %d in binary is: ", result);
    showBinaryNumber(result);

    return 0;
}