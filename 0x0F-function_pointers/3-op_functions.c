#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Return sum of 2 numbers.
 * @a: input first number
 * @b: input second number
 * Return: sum (success)
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns subtraction of 2 numbers.
 * @a: input first number
 * @b: input second number
 * Return: subtraction (success)
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns multipication of 2 numbers.
 * @a: input first number
 * @b: input second number
 * Return: multiplication (success)
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns division of 2 numbers.
 * @a: input first number
 * @b: input second number
 * Return: division (success)
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns remainder of division of 2 numbers.
 * @a: input first number
 * @b: input second number
 * Return: remainder (Success)
*/
int op_mod(int a, int b)
{
	return (a % b);
}
