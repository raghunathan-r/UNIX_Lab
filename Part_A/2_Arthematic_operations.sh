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