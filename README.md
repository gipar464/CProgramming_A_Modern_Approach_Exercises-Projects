I turned off editor quick suggestions to avoid getting hints that don't help me learn.
To reenable, go into user settings --> Ctrl + Shift + P, then choose user settings (not default).
Finally, comment out the custom settings for C.


To compile and run a c program, first write the program to a .c file, then compile it using gcc <filename.c> -o <whatevernameyouwant>.
Then to run it, simply .\<whateverfilename.exe>
note: you need to be in the same directory/folder as the file and exe for this to work


To debug, go to Terminal > Run Build Task. VSCode will automatically make a tasks.json to make
things simpler for you. Now you can run and debug your code. 
NOTE: YOU MUST HAVE THE MICROSOFT C/C++ EXTENSION IN VSCODE IN ORDER TO DEBUG THIS PROPERLY


Important Computer Science concepts:
Terminal - Interface that displays input and output
Shell - The software/program that handles commands inputed from the terminal and outputs
        it on the same terminal
Bash - Command interpreter and a type of shell
Kernel - a computer program that always has complete control over all the hardware in the system
         such as the CPU, memory, and devices