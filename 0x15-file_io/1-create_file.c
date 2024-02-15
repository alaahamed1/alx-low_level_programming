#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int create_file(const char *filename, char *text_content)
{
	int fd;
	int file_exists = 0;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDONLY);
	if (fd != -1)
		file_exists = 1;
	if (file_exists)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		fd = write(fd, text_content, strlen(text_content));
		return (1);
	}
	else
	{
		fd = open(filename, O_CREAT | O_WRONLY, 0600);
		if (fd == -1)
			return (-1);
		if (text_content == NULL)
			text_content = "";
		fd = write(fd, text_content, strlen(text_content));
		return (1);
	}
}
