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