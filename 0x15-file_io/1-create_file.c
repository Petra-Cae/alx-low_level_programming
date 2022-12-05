#include "main.h"

/**
* create_file - creates a file
* @filename: name of the file to be created
* @text_content: NULL terminated string to write to the file
*
* Return: 1 on success else 0
*/
int create_file(const char *filename, char *text_content)
{
	int myfile, ltrs, rw;

	if (!filename)
		return (-1);

	myfile = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (myfile == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (ltrs = 0; text_content[ltrs]; ltrs++)
		;

	rw = write(myfile, text_content, ltrs);

	if (rw == -1)
		return (-1);

	close(myfile);
	return (1);
}
