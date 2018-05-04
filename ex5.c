 /*Выводит колонки от m до n из файла*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int ch;
	int m, n;
	FILE *pf;

	if(argc != 2)
	{
		fprintf(stderr, "enter the: %s file_for_reading_name\n", argv[0]); // example_1.txt
		exit(EXIT_FAILURE);
	}

	if((pf = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "open error %s", argv[1]);
		exit(EXIT_FAILURE);
	}

	printf("enter the m and n: ");
	scanf("%i %i", &m, &n);
	printf("\n");

	while(1)
	{
		for (int i = 1; i <= n; ++i)
		{
			ch = getc(pf);
			if(i >= m)
				putc(ch, stdout);
			if(ch == EOF)
				exit(EXIT_SUCCESS);
		}
	}

	return 0;
}