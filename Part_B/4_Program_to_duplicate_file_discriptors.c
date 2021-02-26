// Write a C/C++ program to duplicate the file descriptor of a file Foo to standard input file descriptor 

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void main(int argc, char *argv[])
{
	int fileDisc, newFileDisc;

	// Checking if the proper number of argumenst are given
	if (argc != 2)
	{
		printf("\n\nERROR the number of arguments given is incorrect\n");
		exit(1);
	}

	// Opening the file and getting the file discriptor
	if ((fileDisc = open(argv[1], O_WRONLY)) == -1)
	{
		printf("\n\nERROR opening the given file\n");
		exit(1);
	}

	// After succesful opeing of file, duplicating the file discriptor and saving to new file discriptor
	if((newFileDisc = fcntl(fileDisc, F_DUPFD, 0) == -1))
	{
		printf("\n\nERROR duplucating the file discriptor\n");
		exit(1);
	}
	else 
	{
		printf("Succesfully duplucated the file discripter of file [%s]\n", argv[1]);
		printf("Old file discrptor was = %d\nNew file discptor is = %d\n\n", fileDisc, newFileDisc);
		exit(0);
	}	
}
