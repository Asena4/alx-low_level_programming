#include "main.h"

/**
 * append_text_to_file - function appends text at the end of a file
 * @filename: the filename
 * @text_content: added content
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nlett;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nlett = 0; text_content[nlett]; nlett++)
			;

		rwr = write(fd, text_content, nlett);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
