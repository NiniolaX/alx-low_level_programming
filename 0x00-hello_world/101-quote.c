#include <stdio.h>
#include <unistd.h>
/**
 * Description: main - Prints string to standard output.
 * Return: Returns 0 if success.
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
(unsigned long)sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
return (1);
}
