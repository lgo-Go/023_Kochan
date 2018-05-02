/*Объединяет соответствующие строки из разных файлов*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	FILE *pf_1, *pf_2;

	if(argc != 3)
	{
		fprintf(stderr, "enter the: %s file_for_reading_name file_for_writing_name \n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if((pf_1 = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "error open %s", argv[1]);
		exit(EXIT_FAILURE);
	}
	if((pf_2 = fopen(argv[2], "r")) == NULL)
	{
		fprintf(stderr, "error open %s", argv[2]);
		exit(EXIT_FAILURE);
	}

	/*Code*/

	if((fclose(pf_1)) != 0)
			fprintf(stderr, "error close %s\n", argv[1]);

	if((fclose(pf_2)) != 0)
		fprintf(stderr, "error close %s\n", argv[2]);

	return 0;
}