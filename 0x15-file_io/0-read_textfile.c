#include "main.h"

/**
* read_textfile - reads text files and prints to POSIX stdout
* @filename: name of the file to be read
* @letters: num of letters to read and print
*
* Return: numbers of letters it could read and print, else 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t myf, wr;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (buff == NULL)
		return (0);

	myf = read(fd, buff, letters);
	wr = write(STDOUT_FILENO, buff, myf);

	close(fd);
	free(buff);
	return (wr);
}
