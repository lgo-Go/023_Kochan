/*Копирование файла с заменой строчных букв заглавными*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int ch;
	FILE *pfr, *pfw;

	if(argc != 3)
	{
		fprintf(stderr, "%s file_for_reading_name file_for_writing_name \n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if((pfr = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "error open %s", argv[1]);
		exit(EXIT_FAILURE);
	}
	if((pfw = fopen(argv[2], "w")) == NULL)
	{
		printf("error open %s", argv[2]);
		exit(EXIT_FAILURE);
	}
	return 0;
}