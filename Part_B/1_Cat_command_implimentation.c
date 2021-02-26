// Write a C/C++ program to implement the cat command using general files API’s

#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void main(int argc, char *argv[])
{
	int fileDiscripter;
    // charecters extracted will be stored in the string temp
	char temp[2];

	// by entering 0777 we provide wrx permission to all 0777 (octal)    == binary 0b 111 111 111    == permissions rwxrwxrwx   (== decimal 511)
	fileDiscripter = open(argv[1], O_RDONLY, 0777);
	
	//Check if file discrptor is open properly
	if (fileDiscripter == -1)
	{
		printf("\nERROR opening the file");
	}
	else
	{
        // read function reads charecter by chareteor and stores it in buffer
		while (read(fileDiscripter, temp, 1) > 0)
		{
			printf("%c", temp[0]);
		}
		close (fileDiscripter);
	}
}