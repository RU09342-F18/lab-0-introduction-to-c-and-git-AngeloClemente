#include <stdio.h>



/*
 * math.h
 *
 *  Created on: Sept 10, 2018
 * 	Last Edited: Sept 10, 2018
 *      Author: Angelo Clemente
 */

/* Your assignment is to take the math function and implement at least the following functions:
 * + Add (num1 + num2)
 * - Subtract (num1 - num2)
 * * Multiply (num1 * num2)
 * / Divide (num1 / num2)
 * % Modulus (num1 % num2)
 * < Left Shift (num1 << num2)
 * > Right Shift (num1 >> num2)
 * & Bitwise AND (num1 & num2)
 * | Bitwise OR (num1 | num2)
 * ^ Bitwise XOR (num1 ^ num2)
 * ~ Bitwise Inverse (~num1) for this operation, num1 and num2 are still needed
*/

#ifndef MATH_H_
#define MATH_H_

int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
int divide(int, int);
int modulus(int, int);
int leftShift(int, int);
int rightShift(int, int);
int bitwiseAND(int, int);
int bitwiseOR(int, int);
int bitwiseXOR(int, int);
int bitwiseInverse(int, int);

int main()
{
    //printf("Hello, World!\n");

    return 0;
}

//Part of your documentation should be listing the valid inputs and outputs for the functions you create.
int math(int num1, int num2, char Operator);

int add(int num1, int num2) //this function returns the sum (as an int) of num1 and num2
{
    return num1 + num2;
}

int subtract(int num1, int num2) //this function returns the difference (as an int) between num1 and num2
{
    return num1 - num2;
}

int multiply(int num1, int num2) //this function returns the product (as an int) of num1 and num2
{
    return num1*num2;
}

int divide(int num1, int num2) //this function returns the quotient (as an int) of num1 as the dividend and num2 as the divisor. If the divisor is zero, it prints an error message. Note that this is integer division
{
    if(num2!=0) //checks if num2 is not zero
    {
        return num1/num2;
    }
    else
    {
        printf("The result is undefined\nPlease change the divisor"); //error message
    }
}

int modulus(int num1, int num2) //this function returns the remainder (as an int) of num1 mod num2
{
    if(num2 != 0) //checks if num2 is not zero
    {
        return num1 % num2;
    }
    else
    {
        printf("The result is undefined\nPlease change the second number");
    }
}

int leftShift(int num1, int num2) //this function left shifts num1 by num2 and returns the result as an int
{
    return num1 << num2;
}

int rightShift(int num1, int num2) //this function right shifts num1 by num2 and returns the result as an int
{
    return num1 >> num2;
}

int bitwiseAND(int num1, int num2) //this function bitwise ANDs num1 and num2 
{
    return num1 & num2;
}

int bitwiseOR(int num1, int num2) //this function bitwise ORs num1 and num2
{
    return num1 | num2;
}

int bitwiseXOR(int num1, int num2); //this function bitwise XORs num1 and num2
{
    return num1 ^ num2;
}

int bitwiseInverse(int num1, int num2) //this function bitwise inverts num1 but needs num1 and num2 as inputs but returns an inverted num1
{
    return ~num1;
}



#endif /* MATH_H_ */
