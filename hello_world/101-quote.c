#include <unistd.h>
/**
 * main - this prints exactly the input on it
 * Return: always 1.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora korpar, 2015-10-19\n", 59);
	return (1);
}
