#include "main.h"

/**
 * read_textfile - reads a text file and prints it.
 *
 * @filename: const char type pointer to file to be read
 *
 * @letters: size_t data type
 *
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t fpRead, fpWrite, fpClose;
	char *lineBuffer;

	if (filename == NULL) /*check if file is present*/
		return (0);

	lineBuffer = malloc(sizeof(char) * letters); /*dynamically allocate memory*/

	if (lineBuffer == NULL)
		return (-1);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	fpRead = read(fp, lineBuffer, letters);

	if (fpRead == -1)/*check if read failed*/
		return (-1);

	fpWrite = write(STDOUT_FILENO, lineBuffer, fpRead);

	if (fpWrite == -1)/*check if write failed*/
		return (-1);
	fpClose = close(fp);

	if (fpClose == -1)
		return (-1);

	return (fpRead);
}
