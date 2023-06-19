0x18-dynamic_libraries - Dynamic libraries unlike static libraries are loaded
during runtime. Dynamic libraries gives a way to modulrize and reuse cod across
different programs.
Creating a dynamic file in C
1. compile the source code into object files
   	-gcc -fPIC -c *.c
	   - Converts all .c function file into object files
	-gcc -shared -o dlibname.so *.0
	   - -shared allows platform dependant format for the resulting library
	   - dynamic libraries are specified with the extension '.so'
2. Creating an index
   	    nm -D dlibname.so