#include "main.h"

/**
 * append_text_to_file - function that appends text at the end
 * @filename: file ptr
 * @text_content: NULL terminated string to add at the end
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0, content, file;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	content = write(file, text_content, len);

	if (file == -1 || content == -1)
		return (-1);
	close(file);
	return (1);
}
