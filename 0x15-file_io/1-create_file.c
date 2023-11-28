#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: the filename
 * @text_content: content written in the file.
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nlett;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nlett = 0; text_content[nlett]; nlett++)
		;

	rwr = write(fd, text_content, nlett);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
