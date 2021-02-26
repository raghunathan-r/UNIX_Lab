#!/bin/awk -f

# in this program we diplay the first and third word of the text file provided

BEGIN {print "This AWK Script prints the first and theird word of the entred file\n"}

{print $1, "\t", $3}

END{print "\nAWK Script ended\n"}