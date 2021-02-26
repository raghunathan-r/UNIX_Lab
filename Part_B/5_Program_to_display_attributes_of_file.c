// Write a C/C++ program to query and display the different attributes associated with a file

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <sys/stat.h>
#include <sys/types.h>

void main(int argc, char *argv[])
{
	struct stat buf;

	// Checking if valid number of arguments are given
	if (argc != 2)
	{
		printf("\n\nERROR invalid number of arguments\n");
		exit(1);
	}

	// Obtaining stat of given file, and printing error if not obtained
	if (stat(argv[0], &buf) == -1)
	{
		printf("\n\nERROR unable to obtain stat of the file\n");
		exit(1);
	}

	// Displaying the file type
	printf("\nDisplaying the type and attributes of given file :-\n");
	switch (buf.st_mode & S_IFMT)
	{
		case S_IFBLK :
			printf("block device file\n");
			break;
		case S_IFCHR :
			printf("charecter device file\n");
			break;
		case S_IFDIR :
			printf("directory");
			break;
		case S_IFIFO :
			printf("FIFI/pipe\n");
			break;
		case S_IFLNK :
			printf("symlink\n");
			break;
		case S_IFREG :
			printf("regular file\n");
			break;
		case S_IFSOCK :
			printf("socket\n");
			break;
		default :
			printf("file type not known\n");
			break;
	}

	printf("\nI-node number : %lld", (long long) buf.st_ino);
	printf("\nBlocks allocated : %lld\n\n", (long long) buf.st_blocks);
	printf("\nMode : %lo (octal)", (long) buf.st_mode);

	exit(0);
}
