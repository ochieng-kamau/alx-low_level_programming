#include <stdio.h>
#include <unistd.h>

/**
 * main - Program that prints a string 
 * 	  using write
 * Return: 1 to stderr
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
