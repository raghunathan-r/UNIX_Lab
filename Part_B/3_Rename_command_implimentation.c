// Write a C/C++ program to implement the ln/rename command using general file API’s

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void main (int argc, char *argv[])
{
	// Checking if valid number of arguments are given
	if (argc != 3)
	{
		printf("\n\nERROR invalid number of arguments given\n");
		exit(1);
	}

	// Linking the two files to same inode number, that way the file name changes. The function "link" returns -1 if it faile
	if (link(argv[1], argv[2]) == -1)
	{
		printf("\n\nERROR unable to like files\n");
		exit (1);
	}
	else
	{
		printf("\nFile are succesfully linked\n");
		printf("Displaying inode number of both files after updating :-\n");

		// Storing the list of files in directory to string "str"
		char str[100];
		sprintf (str, "ls -i %s %s \n\n", argv[1], argv[2]);

		// Printing the list of files stored in the string
		system(str);
		exit(0);
	}
}
