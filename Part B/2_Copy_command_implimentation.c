// Write a C/C++ program to implement the cp (copy) command using general file API’s

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int main (int argc, char *argv[])
{
	// sorce and destination file discriptors
	int sourceFileDisc, destFileDisc;

	int tempRead;

	char *buffer[BUFFER_SIZE];

	// Checking if the number of argumets given is right
	if (argc != 3)
	{
		printf("\n\nERROR improper number of arguments\n");
		exit(1);
	}

	// If all the arguments are right, we open the source file
	sourceFileDisc = open(argv[1], O_RDONLY);

	// Checking if the file is open properly
	if (sourceFileDisc == -1)
	{
		printf("\n\nERROR opening sorce file [erro number - %d]\n", errno);
		exit(1);
	}

	// If source file is open, opening destination file with proper modes and permisions for user group and others
	destFileDisc = open ( argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH );

	// cheking of the destination file is open properly
	if (destFileDisc == -1)
	{
		printf("\n\nERROR opening the destination file [error number - %d]\n", errno);
		exit(1);
	}

	// Now that both source and destination file are open, starting to copy data till EOF, tempRead > 0 is to check of the charecter is sucessfully retrived
	while ((tempRead = read(sourceFileDisc, buffer, BUFFER_SIZE)) > 0)
	{
		if( write(destFileDisc, buffer, tempRead) != tempRead )
		{
			printf("\nERROR in writing data to destination file [%s]\n", argv[2]);
		}
	}

	// Closing both source and destination files
	if (close(sourceFileDisc) == -1)
		printf("\n\nERROR unable to close source file");
	if (close(destFileDisc) == -1)
		printf("\n\nERROR unable to close destination file");

	exit(0);
}
