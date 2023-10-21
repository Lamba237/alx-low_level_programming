#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 *op_add - returns sum of two numbers
 *@a: first number
 *@b: second number
 *Return: returns sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - returns difference of two numbers
 *@a: first number
 *@b: second number
 *Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - returns product of two numbers
 *@a: first number
 *@b: scond number
 *Return: product of two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - returns division
 *@a: first number
 *@b: second number
 *Return: returns product of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 *op_mod - returns modulus
 *@a: first number
 *@b: second number
 *Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
