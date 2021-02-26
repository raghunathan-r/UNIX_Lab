// Write C/C++ program to read and display the last 10 character’s of the input file

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main(int argc, char *argv[])
{
	FILE *filePtr;
	char ch;
	int num, strLength;

	// Checking if the arguments are correct
	if (argc != 2)
	{
		printf("\n\nERROR invalid number of arguments\n");
		exit(1);
	}

	// Accepting the num value to print last num charecters
	printf("Enter the value of last n charecters to print : ");
	scanf("%d", &num);

	// Opeing the file to read from
	filePtr = fopen(argv[1], "r");
	if (filePtr == NULL)
	{
		printf("\n\nERROR cannot open the given file\n");
		exit(1);
	}
	else 
	{
		// Placing the pointer at the end of file
		fseek(filePtr, -1, SEEK_END);

		// The length of the fill will be equal to the position of the last charecter
		strLength = ftell(filePtr);

		//Placing the cursor at num position from the end
		fseek(filePtr, (strLength - num), SEEK_SET);

		// Displaying all the charecters form len - num position
		do
		{
			ch = fgetc(filePtr);
			printf("%c", ch);
		}while (ch != EOF);

	}

	fclose(filePtr);
	exit(0);
}
