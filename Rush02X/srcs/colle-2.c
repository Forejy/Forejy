#include "/Users/jmarques/Documents/Rush02/includes/header.h"
#include <stdio.h>
#include <stdlib.h>
#define BUF_SIZE 4096

int main(void)
{
	int i = 0;
	char *line;
	char carac_courant;
	int buf[BUF_SIZE + 1];

	line = malloc(sizeof(char*));
	read (1, &carac_courant, 1);
	printf("%c\n", carac_courant);

	while(carac_courant != '\n')
	{
		line[i] = carac_courant;
		i++;
		free(line);
		line = malloc(sizeof(char*) * (1 + i));
		read(1, &carac_courant, 1);
	}

	printf("\n%s", line);
	return (0);
}


