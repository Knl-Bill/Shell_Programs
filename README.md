# Shell_Programs

The basic concept of a shell script is a list of commands, which are listed in the order of execution.
To write a shell program, the file name should be of the form, <filename>.sh format, where <filename> is the name of the file and .sh is the extension.

# How to run Shell Programs using the terminal?
1) Create a file <filename>.sh, use the command $vi <filename>.sh
2) To enter the instructions, press insert and start writing
3) To save the file, press the ESC button and type :wq
4) To run the file, use the command $bash <filename>.sh

# Basic stdin, stdout statements
1) For taking user input, the "read" command is used, and for printing contents to the screen, the "echo" command is used
   for eg:
   echo "What's your age?"
   read age
   echo "Age is $age"

   output:-
   What's your age?
   18
   Age is 18

Note: - To access the values stored in a particular variable, the "$" character is used before the variable name, like in above example, we used the "age" variable to read but "$age" to access the contents of "age" variable while printing it. 
