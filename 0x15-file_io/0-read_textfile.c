#include "main.h"
#include <stdlib.h>

/**
 * read_textfile_Read_text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 *        SUIIIIIIIIIIIIIIIIIII
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t ok;
	ssize_t w;
	ssize_t t;

	ok = open(filename, O_RDONLY);
	if (ok == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(ok, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(ok);
	return (w);
}
