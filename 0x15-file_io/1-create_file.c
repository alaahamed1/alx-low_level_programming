#include "main.h"
/**
 *_putchar - custom putchar function
 *@c: the character to be written
 *Returns: On success, returns the number of characters written (always 1)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * create_file - creates a file
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
*/
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
