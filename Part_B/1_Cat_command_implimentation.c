// Write a C/C++ program to implement the cat command using general files API’s

#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void main(int argc, char *argv[])
{
	int fileDiscripter, temp;
	char buffer[2];
	fileDiscripter = open(argv[1], O_RDONLY, 0777);
	
	//Check if file discrptor is open properly
	if (fileDiscripter == -1)
	{
		printf("\nERROR opening the file");
	}
	else
	{
		while ((temp = read(fileDiscripter, buffer, 1)) > 0)
		{
			printf("%c", buffer[0]);
		}
		close (fileDiscripter);
	}
}
