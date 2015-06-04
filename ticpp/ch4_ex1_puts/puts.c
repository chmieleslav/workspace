/*
In the Standard C library, the function puts( ) prints a
char array to the console (so you can say puts("hello") ).
Write a C program that uses puts( ) but does not include
<stdio.h> or otherwise declare the function. Compile this
program with your C compiler. (Some C++ compilers are
not distinct from their C compilers; in this case you may
need to discover a command-line flag that forces a C
compilation.) Now compile it with the C++ compiler and
note the difference.
*/

//#include <stdio.h> 
int puts (const char * str);

int main(void)
{
	puts("hello");
	
	return 0;
}

/*

$ gcc puts.c -o puts
===> OK

$ g++ puts.cpp -o puts
===> NOK
C:\Users\Piotr\AppData\Local\Temp\ccIPuo9q.o:puts.cpp:(.text+0x16): undefined reference to `puts(char const*)'
collect2.exe: error: ld returned 1 exit status

*/

