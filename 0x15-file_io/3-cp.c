#include <stdio.h>
#include "main.h"

/**
  * @argc: The argument count
  * @argv: The argument vector
  * checks forif there are exactly three command-line arguments
  * Return: ...
  */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	exit(0);
}

/**
 * copying the contents of the source file to the destination file
  * copy_file - ...
  * @src: ...
  * @dest: ...
  *
  * Return: ...
  */
void copy_file(const char *src, const char *dest)
{
	int ofd, tfd, readed;
	char buff[1024];

	ofd = open(src, O_RDONLY);
	if (!src || ofd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	tfd = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((readed = read(ofd, buff, 1024)) > 0)
	{
		if (write(tfd, buff, readed) != readed || tfd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}

	if (readed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	if (close(ofd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ofd);
		exit(100);
	}

	if (close(tfd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", tfd);
		exit(100);
	}
}
