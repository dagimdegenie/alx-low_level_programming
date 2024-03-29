What are pointers and how to use them?

A variable whose value is the address of another variable. Declare them like so: type variableName. Some programming tasks are better with pointers and dynamic programming or memory allocation requires pointers. All variables have a memory location and each have an address defined which can be accessed with the & operator. & denotes an address in memory eg. &var1 might return bff5a400. the actual value of all pointers, regardless of data type, is a long hexadecimal number that represents a memory address. We can access the value at the memory address by using variableName. A good practice is to assign pointers to NULL when declaring. Can't and shouldn't point to zero since that is for the OS memory. A good check is if (!pointer) to see if it is not null or null. Pointers have 4 arithmetic operators, +, ++, -, --. We can have an array of pointers, we can point to pointers, pass pointers to functions, and return pointers from functions.



What are arrays and how to use them?

A kind of data structure that stores a fixed-size sequential collection of elements of the same type. It is a collection of variables of the same type. It is contiguous memory locations. The lowest address is the first element and the highest address is the last element. To declare and use, type- dataType arrayName [arraySize];. This will make a single-dimensional array. To initialize, we can do an example, double balance[3]={5.0, 2.5, 7.0}; 0 is the first index or element and the size minus one is the last index. To access array elements, we can type double salary = balance[2]; this statement will get the 3rd element from the array and assign it to salary. Important concepts for arrays: C supports multi-dimensional arrays, you can pass arrays to functions, you can return an array from a function, you can point to an array. Remember, & produces the address and * dereferences a pointer.



What are the differences between pointers and arrays?

They are very similar. An important difference is a pointer can take different addresses as values but an array is fixed. Array name gives the address of the first element of an array. Array members are accessed using pointer arithmetic. Array parameters are always passed as pointers. Using sizeof(pointer) will give you the size of the pointer which is usually 1 and then sizeof(array) gives the size of the array, which is bigger and different. A[X] is exactly equivalent to (A+X). Also heap vs stack issues. Arrays cannot be assigned, passed as function arguments, or compared for equality whereas pointers can. Manipulating an array usually involves pointers to individual elements. Arrays are a single, preallocated size of sequential elements all of the same type and fixed in size and location. A pointer is a reference to any data element or type located anywhere. Pointers must be assigned to point to an allocated space and can be resized and it can simulate a dynamically allocated array. Pointers are more general data structures.



How to use strings and how to manipulate them?

Strings are one dimensional arrays that are terminated by the null character \0. char greeting[6] = {'H','e','l','l','o','\0'}; The C compiler automatically places the \0 at the end though when the array is initialized. String.h header has many functions like strcopy which copies string s2 into s1. strcat appends s2 to s1. strlen returns the length. strcmp returns 0 is the 2 strings are the same and negative is s1 s2 and positive if s1 s2. strchar returns a pointer to the first occurrence of character ch in string s1. strstr returns a pointer to the first occurrence of string s2 in string s1.



Scope of variables?

int A[n] is a static array and memory is allocated at run time stack for A. When A is out of scope, the memory is deallocated and A can no longer be referenced. C allows for dynamic declaration of an array like so- int *A= (int*)malloc(n* sizeof(int)); this code will declare a memory block of size n*sizeof(int) which can be accessed by using a pointer A. This A can be treated as a pointer or array. The dynamic declaration is assigned memory in the dynamic heap, which the programmer must manage. calloc is preferred over malloc when doing dynamic arrays.



Extra side notes I took while crawling the internet:

Computer reserves memory for each variable declared. More or less memory is reserved depending on data type. 1 byte is 8 bits. each bit is 0 or 1. Sizes also depend on the machine, for a 64-bit we have char = 1 byte, int = 4 bytes, float = 4 bytes. A char can hold 2^8 bits which is 256 (-128 to 127 bits which is ASCII baby. Int is 8 bytes or 32 bits so that is 2^32 values which is -2 bil to 2.147 bil. MAPLESTORY MAX MESOS BABY. The space reserved for a variable is the address. Use %p to print addresses or values of pointers with printf. Size of pointers on most 64 bit machines is 8 bytes. A pointer can only point to a variable of the type it was initialized with. Cannot point a char to an int. Dereferencing is manipulating value sstored at the memory address. The * has different meaning depending on the context, arithmetic, declaring, dereferencing pointers. It declares a variable is of type pointer, and it can dereference when used inside code. To refer to array name, 2 ways: sizeof and & operator. Sizeof(array) is size of the object itself so all its components. Address of the first array is the same as the address of the whole array. if a is an array with the address 0x7ffff8f19240, how come a + 1 == 0x7ffff8f19244 and not 0x7ffff8f19241? Because int is 4 bytes.



Each scripts and their output

Script 0 - Write a function that concatenates two strings. Prototype: char *_strcat(char *dest, char *src); This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte. Returns a pointer to the resulting string dest. FYI: The standard library provides a similar function: strcat. Run man strcat to learn more.

Script 1 - Write a function that concatenates two strings. Prototype: char *_strncat(char *dest, char *src, int n); The _strncat function is similar to the _strcat function, except that it will use at most n bytes from src; and src does not need to be null-terminated if it contains n or more bytes. Return a pointer to the resulting string dest. FYI: The standard library provides a similar function: strncat. Run man strncat to learn more.

Script 2 - Write a function that copies a string. Prototype: char *_strncpy(char *dest, char *src, int n); Your function should work exactly like strncpy. FYI: The standard library provides a similar function: strncpy. Run man strncpy to learn more.

Script 3 - Write a function that compares two strings. Prototype: int _strcmp(char *s1, char *s2); Your function should work exactly like strcmp. FYI: The standard library provides a similar function: strcmp. Run man strcmp to learn more.

Script 4 - Write a function that reverses the content of an array of integers. Prototype: void reverse_array(int *a, int n);. Where n is the number of elements of the array.

Script 5 - Write a function that changes all lowercase letters of a string to uppercase. Prototype: char *string_toupper(char *);

Script 6 - Write a function that capitalizes all words of a string. Prototype: char *cap_string(char *); Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }.

Script 7 - Write a function that encodes a string into 1337. Letters a and A should be replaced by 4. Letters e and E should be replaced by 3. Letters o and O should be replaced by 0. Letters t and T should be replaced by 7. Letters l and L should be replaced by 1. Prototype: char *leet(char *);. You can only use one if in your code. You can only use two loops in your code. You are not allowed to use switch. You are not allowed to use any ternary operation.

Script 8 - Write a function that encodes a string using rot13. Prototype: char *rot13(char *); You can only use if statement once in your code. You can only use two loops in your code. You are not allowed to use switch. You are not allowed to use any ternary operation.

Script 100 - Write a function that prints an integer. Prototype: void print_number(int n); You can only use _putchar function to print. You are not allowed to use long. You are not allowed to use arrays or pointers. You are not allowed to hard-code special values.

Script 101 - Add one line to this code, so that the program prints a[2] = 98, followed by a new line. You are not allowed to use the variable a in your new line of code. You are not allowed to modify the variable p. You can only write one statement. You are not allowed to use ,. You are not allowed to code anything else than the line of expected line of code at the expected line. Your code should be written at line 19, before the ;. Do not remove anything from the initial code (not even the comments) and don’t change anything but the line of code you are adding (don’t change the spaces to tabs!). You are allowed to use the standard library.

Script 102 - Write a function that adds two numbers. Prototype: char *infinite_add(char *n1, char *n2, char *r, int size_r);. Where n1 and n2 are the two numbers. r is the buffer that the function will use to store the result. size_r is the buffer size. The function returns a pointer to the result. You can assume that you will always get positive numbers, or 0. You can assume that there will be only digits in the strings n1 and n2. n1 and n2 will never be empty. If the result can not be stored in r the function must return 0.

Script 103- Write a function that prints a buffer. Prototype: void print_buffer(char *b, int size);. The function must print the content of size bytes of the buffer pointed by b. The output should print 10 bytes per line. Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0. Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space. Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print .. Each line ends with a new line \n. If size is 0 or less, the output should be a new line only \n. You are allowed to use the standard library. The output should look like the following example, and formatted exactly the same way:

Limitation of these projects:

-Allowed editors: vi, vim, emacs

-All your files will be compiled on Ubuntu 14.04 LTS

-Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic

-All your files should end with a new line

-A README.md file, at the root of the folder of the project is mandatory

-Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

-You are not allowed to use global variables

-No more than 5 functions per file

-You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden

-You are allowed to use _putchar

-You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account

-In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples

-The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called holberton.h

-Don’t forget to push your header file
