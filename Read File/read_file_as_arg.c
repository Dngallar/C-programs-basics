/*
    Program to read files as argument
    read_file_as_arg.out/exe < file_name

    in Windows PowerShell:
    Get-Content file_name | read_file_as_arg.exe

    Domingo Gallardo Saavedra
    August 9, 2020
*/



// Includes
#include <stdio.h>

// Main function
int main(void)
{
    int c; // Use for int value of character
    while((c = getchar()) !=  EOF)
    {
	       printf("%c", c);
    }
    return 0; // Return 0 for success
}
