#include <stdio.h>
/**
 * Description: main - Prints all possible combination of single numbers.
 * Return: 0 if success.
 */

int main(void) {
    int i, j, k;

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            for(k = 0; k < 10; k++) {
                putchar(i + '0');
                putchar(j + '0');
                putchar(k + '0');
		putchar(',');
            }
        }
    }
    return (0);
}

