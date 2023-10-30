#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX standard output
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 * Return: If the function fails or filename is NULL - 0.
 * O or write - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_o, file_r, file_w;
	char *temp;

	if (filename == NULL)
		return (0);

	temp = malloc(sizeof(char) * letters);
	if (temp ==  NULL)
		return (0);

	file_o = open(filename, O_RDONLY);
	file_r = read(file_o, temp, letters);
	file_w = write(STDOUT_FILENO, temp, file_r);

	if (file_o == -1 || file_r == -1 || file_w == -1 || file_w != file_r)
	{
		free(temp);
		return (0);
	}

	free(temp);
	close(file_o);

	return (file_w);

}
