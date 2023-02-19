#include <stdio.h>

/**
 *
 */
int main()
{
	int i = 0;
	while(i < 5)
	{
		putchar(i + '0');
		if (i == 5)
			break;
		putchar(',');
		putchar('');
		i++;
	}
	putchar('\n');
	return 0;
}
