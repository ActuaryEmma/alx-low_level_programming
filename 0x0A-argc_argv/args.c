#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[])
{
	int i;

	int sum = 0;

	printf("agrc = %d\n", argc);
	printf("Below are the arguments\n");
	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("agrv[%d] = %s\n", i, argv[i]);
			sum += atoi(argv[i]);
		}
		printf("Total = %d\n", sum);
	}
	return (0);
}
