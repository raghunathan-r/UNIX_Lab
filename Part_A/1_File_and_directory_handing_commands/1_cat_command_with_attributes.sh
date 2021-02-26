#!bin/sh

echo "\n\nCreating file catExample1.txt with contents :-\nHello friend\n\nNice to meet you\n"

#cat catExample1.txt >> "\nHello friend\n\nNice to meet you\n"

echo "\n\nCreating file catExample2.txt with contents :- \nThis is a follow up text file content\n"

echo "\n=> Displaying  cat catExample* command :-\n"
cat catExample*

echo "\n=> Diplaying cat -n catExample* command :-\n"
cat -n catExample*

echo "\n=> Diplaying cat -b catExample* command :-\n"
cat -b catExample*

echo "\n=> Diplaying cat -e catExample* command :-\n"
cat -e catExample*