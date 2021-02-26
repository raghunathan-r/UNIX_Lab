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