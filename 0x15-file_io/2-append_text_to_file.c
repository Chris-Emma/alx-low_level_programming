#include"main.h"

/**
 *append_text_to_file - this appends text at the end of a file
 *@filename: this is a pointer to the name of the file.
 *@text_content: this is the string to add to the end of the file.
 *Return: the function fails or filename is NULL -1
 *	the file does not exist the user lacks write permissions -1
 *	if not 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_o, file_w, file_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (file_len = 0; text_content[file_len];)
			file_len++;
	}

	file_o = open(filename, O_WRONLY | O_APPEND);
	file_w = write(file_o, text_content, file_len);

	if (file_o == -1 || file_w == -1)
		return (-1);

	close(file_o);

	return (1);
}
