# Calculator but the operations are implemented with binar operators
 
# Overview:
This program demonstrates basic arithmetic operations such as addition, subtraction, multiplication, division, and modulo using bitwise operations. It also displays the binary representation of numbers using bitwise shifts.

The arithmetic operations (addition, subtraction, multiplication, division, and modulo) are implemented using fundamental bitwise operators (&, |, ^, <<, >>) instead of traditional arithmetic operators (+, -, *, /, %).

# Files:
main.c: Contains the main() function where arithmetic operations are performed and the binary representation of the numbers is displayed.
functions.c: Contains the functions for:
    -Displaying binary numbers (showBinaryNumber).
    -Bitwise addition, subtraction, multiplication, division, and modulo operations.
functions.h: Header file declaring the functions used in the program.

# Functions:
1.showBinaryNumber(int number):

    -Purpose: Prints the binary representation of the given integer.
    -Process:
    Shifts the number bit by bit and checks if the bit at that position is 1 or 0.
    Prints the bits in groups of four for better readability.
    Example: showBinaryNumber(3); //console output: 0000 0000 0000 0000 0000 0000 0000 0011

2.add(int a, int b):

    -Purpose: Adds two integers using bitwise operators.
    -Process:
    Uses the XOR (^) operator to simulate addition without carry.
    Uses the AND (&) and bit shift left (<<) to handle the carry.
    Repeats until no carry remains.
    Example: add(3, 5); // returns 8

3.subtract(int a, int b):

    -Purpose: Subtracts two integers using bitwise operations.
    -Process:
    Adds a and the two's complement of b (~b + 1).
    Example: subtract(10, 3); // returns 7

4.multiply(int a, int b):

    -Purpose: Multiplies two integers using bitwise operations.
    -Process:
    Uses repeated addition and left/right shifts to simulate multiplication.
    Example: multiply(3, 5); // returns 15

5.divide(int dividend, int divisor):

    -Purpose: Divides two integers using bitwise operations.
    -Process:
    Implements division by repeatedly shifting the divisor and subtracting it from the dividend.
    Handles positive and negative numbers.
    Example: divide(10, 2); // returns 5

6.modulo(int dividend, int divisor):

    -Purpose: Computes the modulo (remainder) of two integers using bitwise division and subtraction.
    -Process:
    Uses the result of the division to compute the remainder.
    Example: modulo(10, 3); // returns 1


# Compilation and Execution:
1.Compile the program:

Use the following command to compile the program:

gcc main.c functions.c -o program

2.Run the program:

After compilation, run the executable:

./program

# Example output 

Number 21 in binary is: 0000 0000 0000 0000 0000 0000 0001 0101 
Number 5 in binary is: 0000 0000 0000 0000 0000 0000 0000 0101 
Addition result 26 in binary is: 0000 0000 0000 0000 0000 0000 0001 1010 

Number 21 in binary is: 0000 0000 0000 0000 0000 0000 0001 0101 
Number 5 in binary is: 0000 0000 0000 0000 0000 0000 0000 0101 
Substract result 16 in binary is: 0000 0000 0000 0000 0000 0000 0001 0000 

Number 21 in binary is: 0000 0000 0000 0000 0000 0000 0001 0101 
Number 5 in binary is: 0000 0000 0000 0000 0000 0000 0000 0101 
Multiply result 105 in binary is: 0000 0000 0000 0000 0000 0000 0110 1001 

Number 21 in binary is: 0000 0000 0000 0000 0000 0000 0001 0101 
Number 5 in binary is: 0000 0000 0000 0000 0000 0000 0000 0101 
Divide result 4 in binary is: 0000 0000 0000 0000 0000 0000 0000 0100 
Modulo result 1 in binary is: 0000 0000 0000 0000 0000 0000 0000 0001 


# Notes:
The program uses bitwise operations to simulate arithmetic, which is helpful for optimization in certain low-level computing environments.
The binary representation is displayed in a 32-bit format with spaces added every 4 bits for readability.