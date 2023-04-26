#include "main.h"
#include <stdio.h>

/*Description: _abs - Computes the absolute value of an integer.
 *@x: Variable to be read.
 *Return: 0 if success.
 */

int _abs(int c)
{
	int abs_val;

	if (c < 0)
	{
		abs_val = c * -1;
		return (abs_val);
	} else if (c > 0)
	{
		abs_val = c;
		return (abs_val);
	}
	return(c);
}
