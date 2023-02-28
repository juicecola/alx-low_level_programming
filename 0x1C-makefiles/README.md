0x1C. C - Makefiles
Makefiles are a type of file used in software development to automate the process of building executable programs and other files from source code. Makefiles are typically used in conjunction with the make command, which reads the Makefile and executes the commands specified in it.

A Makefile consists of a set of rules that specify how to build a particular target file from its dependencies. Each rule consists of a target file, a list of dependencies, and a set of commands to execute to build the target file. For example, a simple Makefile to build a program called "myprogram" from two source files, "file1.c" and "file2.c", might look like this:

makefile
Copy code
myprogram: file1.o file2.o
    gcc -o myprogram file1.o file2.o

file1.o: file1.c
    gcc -c file1.c

file2.o: file2.c
    gcc -c file2.c
In this example, the target "myprogram" depends on the object files "file1.o" and "file2.o". The rules for building these object files are also specified in the Makefile, using the gcc compiler to compile the source files into object files.

When the make command is run, it reads the Makefile and determines which targets need to be built, based on their dependencies and modification times. It then executes the commands specified in the Makefile to build the target files.

Makefiles can be used to automate many different tasks in software development, such as compiling code, running tests, generating documentation, and deploying software. They are a powerful tool for managing complex projects and ensuring that builds are reproducible and consistent across different environments.

RESOURCES
* http://www.sis.pitt.edu/mbsclass/tutorial/advanced/makefile/whatis.htm#:~:text=A%20makefile%20is%20a%20special,the%20makefile%20will%20be%20executed.
*
* https://makefiletutorial.com/
* https://www.geeksforgeeks.org/how-to-install-make-on-ubuntu/
* https://www.gnu.org/software/make/manual/html_node/
