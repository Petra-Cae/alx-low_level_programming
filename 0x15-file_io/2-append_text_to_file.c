#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: name of the file
* @text_content: NULL terminated string added at end of file
*
* Return: 1 if file exists else -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, ltrs, rw;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (ltrs = 0; text_content[ltrs]; ltrs++)
			;

		rw = write(fd, text_content, ltrs);

		if (rw == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
