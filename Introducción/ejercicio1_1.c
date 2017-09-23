#include <stdio.h>

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < sys_nerr; i++)
		printf ("%d: %s\n", i, sys_errlist [i]);
	return 0;
}
