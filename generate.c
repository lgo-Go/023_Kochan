#include <stdio.h>

int main(int argc, char const *argv[])
{
	FILE *pf;
	// char line[] = "This line will be repeated.";

	pf = fopen(argv[1], "w");
	for(int i = 0; i < 200; ++i)
	{
		// fputs(line, pf);
		fprintf(pf, "This line will be repeated.\n");
	}
	return 0;
}