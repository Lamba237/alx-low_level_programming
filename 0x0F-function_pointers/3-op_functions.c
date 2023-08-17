#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *op_add - prints addition.
 *@a: first element
 *@b: second element
 *Return: addition.
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - subtraction
 *@a: 1st element
 *@b: 2nd element
 *Return: sub.
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - multiplication
 *@a: 1st element
 *@b: 2nd element
 *Return: multipication
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - division
 *@a: 1st element
 *@b: 2nd element
 *Return: division
*/
int op_div(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a / b);
}
/**
 *op_mod - modulus
 *@a: 1st number
 *@b: 2nd number
 *Return: modulus
*/
int op_mod(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a % b);
}
