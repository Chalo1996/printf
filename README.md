# Printf Project
---
### Prerequisites:
#### Requirements:</br>
##### General

    Allowed editors: vi, vim, emacs
    All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
    All your files should end with a new line
    A README.md file, at the root of the folder of the project is mandatory
    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
    You are not allowed to use global variables
    No more than 5 functions per file
    In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
    The prototypes of all your functions should be included in your header file called main.h
    Don’t forget to push your header file
    All your header files should be include guarded
    Note that we will not provide the _putchar function for this project

### GitHub

There should be one project repository per group. The other members do not fork or clone the project to ensure only one of the team has the repository in their github account otherwise you risk scoring 0%
More Info
Authorized functions and macros

    write (man 2 write)
    malloc (man 3 malloc)
    free (man 3 free)
    va_start (man 3 va_start)
    va_end (man 3 va_end)
    va_copy (man 3 va_copy)
    va_arg (man 3 va_arg)

### Compilation

    Your code will be compiled this way:

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

    As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
    Our main files will include your main header file (main.h): #include main.h
    You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf. Example of test file that you could use:
    
    
#include <limits.h></br>
#include <stdio.h></br>
#include "main.h"</br>

/**</br>
 * main - Entry point</br>
 *</br>
 * Return: Always 0</br>
 */</br>
int main(void)</br>
{</br>
    int len;</br>
    int len2;</br>
    unsigned int ui;</br>
    void *addr;</br>

    len = _printf("Let's try to printf a simple sentence.\n");</br>
    len2 = printf("Let's try to printf a simple sentence.\n");</br>
    ui = (unsigned int)INT_MAX + 1024;</br>
    addr = (void *)0x7ffe637541f0;</br>
    _printf("Length:[%d, %i]\n", len, len);</br>
    printf("Length:[%d, %i]\n", len2, len2);</br>
    _printf("Negative:[%d]\n", -762534);</br>
    printf("Negative:[%d]\n", -762534);</br>
    _printf("Unsigned:[%u]\n", ui);</br>
    printf("Unsigned:[%u]\n", ui);</br>
    _printf("Unsigned octal:[%o]\n", ui);</br>
    printf("Unsigned octal:[%o]\n", ui);</br>
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);</br>
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);</br>
    _printf("Character:[%c]\n", 'H');</br>
    printf("Character:[%c]\n", 'H');</br>
    _printf("String:[%s]\n", "I am a string !");</br>
    printf("String:[%s]\n", "I am a string !");</br>
    _printf("Address:[%p]\n", addr);</br>
    printf("Address:[%p]\n", addr);</br>
    len = _printf("Percent:[%%]\n");</br>
    len2 = printf("Percent:[%%]\n");</br>
    _printf("Len:[%d]\n", len);</br>
    printf("Len:[%d]\n", len2);</br>
    _printf("Unknown:[%r]\n");</br>
    printf("Unknown:[%r]\n");</br>
    return (0);</br>
}</br>
