Creating a static file in C
1. compile the source code into object files(.o)
	- gcc -c function1.c function2.c
	- This creates 2 object files (.o)
	-Next, Archive the 2 object files into a library file (.a)
2. To create a library file use
	- ar arc limylib.a function1.o function2.o
	     *ar (archiver) - a unix utility program used to create,
	     *modify &extract from archives
	     *arc (archive) is the default archive format used by the ar command
	     -contains compiled code that can be linked with other object files to create executable program.


