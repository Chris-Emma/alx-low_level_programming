#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: pointer to the name of the file to create.
 * @text_content: pointer to a string to write to the file.
 * Return: If the function fails - -1.
 * Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int file_o, file_w, file_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (file_len = 0; text_content[file_len];)
			file_len++;
	}

	file_o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	file_w = write(file_o, text_content, file_len);

	if (file_o == -1 || file_w == -1)
		return (-1);

	close(file_o);

	return (1);
}
