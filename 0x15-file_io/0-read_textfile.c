#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function that reads a text file and prints to stdo
 * @filename: file name
 * @letters: letters to be read
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t content;
	ssize_t toRead;
	ssize_t file;
	char *ptr;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	toRead = read(file, ptr, letters);
	content = write(STDOUT_FILENO, ptr, toRead);

	free(ptr);
	close(file);
	return (content);
}
