/*Выводит по 20 строк из файла*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	FILE *pf;
	int ch, i = 0;
	char enter;

	if(argc != 2)
	{
		fprintf(stderr, "enter the: %s file_for_reading_name\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if((pf = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "error open %s", argv[1]);
		exit(EXIT_FAILURE);
	}

	while(enter != 'q')
	{
		while(i < 20)
		{
			while((ch = getc(pf)) != '\n')
			{
				putc(ch, stdout);
				if(ch == EOF)
					exit(EXIT_SUCCESS);
			}
			++i;
			printf("\n");
		}
		i = 0;
		printf("enter the symbol: ");
		scanf("%c", &enter);
		// printf("\n");
	}

	if((fclose(pf)) != 0)
		fprintf(stderr, "error close %s\n", argv[1]);

	return 0;
}