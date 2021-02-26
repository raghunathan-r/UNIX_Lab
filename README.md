# UNIX Lab Programs

Subject code - 18ISL38 - BE ISE Branch VTU 

## PART A

***Q 1. Execution of various files and directories handling commands***

- CD Command

    `cd ..` movies to previous directory → `cd /`  moves to root directory→ `cd ~` moves to home directory → `cd -` → switches between current and previous directory

- LS Commands

    easy to remember anagram ⇒ **" plaudit "**

    → `ls` list all the files and directories in the pwd
    → `ls -t` lists all the files in the order of last modified time
    → `ls - l` lists all the files with their mode, number of links, owner name, file size, last modified time and file name
    → `ls -i` list with inode numbers
    → `ls -u` list in order of last accessed time
    → `ls -p` puts a slash at the end of each directory
    → `ls -d` lists all directory files instead of their contents
    → `ls -a` list all files including hidden files

    [Ls Command in Linux (List Files and Directories)](https://linuxize.com/post/how-to-list-files-in-linux-using-the-ls-command/)

    ```bash
    #!bin/sh

    # File and directory handling commands

    echo "\n=> Displaying output of ls command :-\n";
    ls

    echo "\n=> Displaying output of ls -t command [order of last modeified time] :-\n";
    ls -t

    echo "\n=> Displaying output of ls -u command [order of last accesed time] :-\n";
    ls -u

    echo "\n=> Displaying output of ls -a command [shows all files including hidden files] :-\n";
    ls -a

    echo "\n=> Displaying output of ls -i command [lists inode number of files] :-\n";
    ls -i

    echo "\n=> Displaying output of ls -p command [puts a \ at the end of each directory] :-\n";
    ls -p

    echo "\n=> Displaying output of ls -d command [lists all directories without their contents] :-\n";
    ls -d

    echo "\n=> Displaying output of ls -l command [mode, number of linkes, owner name, group name, file size, last modified date, file name] :-\n";
    ls -l

    echo "\nTHANK YOU\n\n"
    ```

- CAT Command

    → `cat fileName.txt`  displays the contents of the file
    → `cat file1.txt file2.txt`  displays contents of both files
    → `cat > fileName.txt` entering contents into a new file
    → `cat -n fileName.txt` displays file content with number in each line
    → `cat -b fileName.txt` displays the lines with contents and number in each line
    → `cat -e fileName.txt` puts a $ at the end of each line

    [Cat command in Linux with examples - GeeksforGeeks](https://www.geeksforgeeks.org/cat-command-in-linux-with-examples/)

- Process status

***Q 2. Simple shell script for basic arithmetic and logical calculations***

→ [Athematic operations in detail](https://www.tutorialspoint.com/unix/unix-basic-operators.htm#:~:text=Compares%20two%20numbers%2C%20if%20both,%24b%20%5D%20would%20return%20false.&text=Compares%20two%20numbers%2C%20if%20both%20are%20different%20then%20returns%20true.)

- Shell script

    ```bash
    #!bin/sh

    # Arthematic and Logic operations skript

    echo "\n\nWelcome to the arthematic operations program 😊\n\n"
    echo "Enter two numbers A and B to start with :-\n"

    read a
    read b

    # perfoming the arthematic operations
    ans=`expr $a + $b`
    echo "\nThe sum is -> $ans\n"

    ans=`expr $a - $b`
    echo "\nThe diffrence is -> $ans\n"

    ans=`expr $a / $b`
    echo "\nThe quotien is -> $ans\n"

    ans=`expr $a % $b`
    echo "\nThe reminder is -> $ans\n"

    # Logic operations
    if [ $a -eq $b ]
    then
        echo "A is equal to B"
    elif [ $a -gt $b ]
    then
        echo "A is greater than B"
    elif [ $a -lt $b ]
    then
        echo "A is less then B"
    else
        echo "A is not equal to B"
    fi
    ```

***Q 3. Shell scripts to check various attributes of files and directories***

- Shell script

    ```bash
    #!/bin/sh

    # Script to display all the file permisions and attributes

    echo "\n\nWelcome to the file permison and attributes program 📁\n\n"

    # input the file name
    echo "Enter the name of the file : "
    read fileName

    # checking all the permisions
    if [ -r $fileName ]
    then
        echo "\nThe file has read permisions\n"
    else
        echo "\nThe file does not have read permisions\n"
    fi

    if [ -w $fileName ]
    then
        echo "\nThe file has write permisions\n"
    else
        echo "\nThe file does not have write permisions\n"
    fi

    if [ -e $fileName ]
    then
        echo "\nThe file has execute permisions\n"
    else
        echo "\nThe file does not have execute permisions\n"
    fi

    # checking the type of file
    if [ -f $fileName ]
    then
        echo "\nThe file is an ordinery file\n"
    else
        echo "\nThe file is an ordinery file\n"
    fi

    if [ -d $fileName ]
    then
        echo "\nThe file is a directory\n"
    else
        echo "\nThe file is not a directory\n"
    fi

    if [ -b $fileName ]
    then
        echo "\nThe file is a block file\n"
    else
        echo "\nThe file is not a block file\n"
    fi

    if [ -s $fileName ]
    then
        echo "\nThe file is a size zero file\n"
    else
        echo "\nThe file is not a size zero file\n"
    fi

    if [ -c $fileName ]
    then
        echo "\nThe file is a charecter file\n"
    else
        echo "\nThe file is not a charecter file\n"
    fi

    if [ -e $fileName ]
    then
        echo "\nThe file exists\n"
    else
        echo "\nThe file doesnt exists\n"
    fi
    ```

***Q 4. Shell scripts to check and list attributes of processes***

- Details of process status

    → The options of PS command can be remembered by - **" a flute"** 

    **PID –** the unique process ID

    **TTY –** terminal type that the user is logged into

    **TIME –** amount of CPU in minutes and seconds that the process has been running

    **CMD –** name of the command that launched the process

    [ps command in Linux with Examples - GeeksforGeeks](https://www.geeksforgeeks.org/ps-command-in-linux-with-examples/)

    ```bash
    #!/bin/sh

    # script to diplay all process and attributes

    echo "\n\n-------------------------------------\n"
    echo "SCRIPT TO DISPLAY ALL PROCESSES AND ATTRIBUTES"
    echo "\n--------------------------------------\n\n"

    echo "\nps -> process status of current shell\n"
    ps

    echo "\nps -a -> show the list of all processes and the ones not listed in the terminal\n"
    ps -a

    echo "\nps -f -> process status in full format listing view\n"
    ps -f

    echo "\nps -l -> shows processes and their memory related info\n"
    ps -l

    echo "\nps -u -> shows all processes of current user\n"
    ps -u

    echo "\nps -t -> shows all processes associated with the current terminal\n"
    ps -t

    echo "\nps -e -> shows all the users and system processes\n"
    ps -e

    echo "\n-------------------------------------\n\n"
    ```

***Q 5. Write a shell script to display list of users currently logged in***

- Shell script

    ```bash
    #!/bin/sh

    # Script to display all the users currently logged in

    echo "\n\nDisplaying all the info of the users currently logged in\n"

    echo "\nUsers logged in 👇"
    users

    echo "\nCurrent date and time 👇"
    date

    echo "\nUsers currently logged in 👇"
    who

    echo "\nCurrently logged in username 👇"
    whoami

    echo "---------------------\n"
    ```

***Q 6. Write awk script that uses all of its features***

[https://www.geeksforgeeks.org/awk-command-unixlinux-examples/](https://www.geeksforgeeks.org/awk-command-unixlinux-examples/)

- AWK Script

    → To execute this program type `awk -f 6_AWK_script_feature.awk testFile.txt`

    ```bash
    #!/bin/awk -f

    # in this program we diplay the first and third word of the text file provided

    BEGIN {print "This AWK Script prints the first and theird word of the entred file\n"}

    {print $1, "\t", $3}

    END{print "\nAWK Script ended\n"}
    ```

    ![UNIX%20Lab%20Programs%2061ed4229b89b43ffb52ded032c3d4c13/Untitled.png](https://s3.us-west-2.amazonaws.com/secure.notion-static.com/8d47658e-eaaf-4fcf-939e-b4c89111ce79/Untitled.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAT73L2G45O3KS52Y5%2F20210226%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20210226T131831Z&X-Amz-Expires=86400&X-Amz-Signature=7b1980c1c2bdc79bb86d6e67167cb16be0165ab38e404f70e3ba61f8b8f6cddd&X-Amz-SignedHeaders=host&response-content-disposition=filename%20%3D%22Untitled.png%22)

---

## PART B

***Q 1. Write a C/C++ program to implement the cat command using general files API’s***

→ [0777 meaning](https://unix.stackexchange.com/questions/103413/is-there-any-difference-between-mode-value-0777-and-777/103414) 

File descriptor - a file descriptor is an abstract indicator used to access a file or other input/output resource, such as a pipe or network socket

- 

    ```c
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
    ```

***Q 2. Write a C/C++ program to implement the cp (copy) command using general file API’s***

- 

    ```c
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
    ```

***Q 3. Write a C/C++ program to implement the ln/rename command using general file API’s***

- 

    ```c
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

    		// Storing the files and inode number into "str"
    		char str[100];
    		sprintf (str, "ls -i %s %s \n\n", argv[1], argv[2]);

    		// Printing the list of files stored in the string
    		system(str);
    		exit(0);
    	}
    }
    ```

***Q 4.Write a C/C++ program to duplicate the file descriptor of a file Foo to standard input file
descriptor***

- 

    ```c
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
    ```

***Q 5.Write a C/C++ program to query and display the different attributes associated with a file***

- → Anagram to remember all file attributes **" crp dbl " -** CPR decibel

    ```c
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
    ```

***Q 7.Write C/C++ program to read and display the last 10 character’s of the input file***


```c
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
```

---

**Thank you for looking into my repository, Glad [I](https://twitter.com/raghunathan__r) could be of some help 😊**
