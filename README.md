I turned off editor quick suggestions to avoid getting hints that don't help me learn.
To reenable, go into user settings --> Ctrl + Shift + P, then choose user settings (not default).
Finally, comment out the custom settings for C.


To compile and run a c program, first write the program to a .c file, then compile it using gcc <filename.c> -o <whatevernameyouwant>.
Then to run it, simply .\<whateverfilename.exe>
note: you need to be in the same directory/folder as the file and exe for this to work


To debug, go to Terminal > Run Build Task. VSCode will automatically make a tasks.json to make
things simpler for you. Now you can run and debug your code.