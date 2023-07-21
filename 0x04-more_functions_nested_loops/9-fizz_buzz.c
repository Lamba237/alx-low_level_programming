#include "main.h"
/**
 * main - entry block
 * @void: no argument
 * Return: 0 success
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
		if (i % 3 == 0)
		{
			_putchar("Fizz ");
		}
		else if (i % 5 == 0)
		{
			_putchar("Buzz ");
		}
		else if(i % 15 == 0)
		{
			_putchar("FizzBuzz ");
		}
		else
		{
			_putchar("%d ", i);
		}
	_putchar("Buzz ");
	_putchar("\n");
	return (0);
}
