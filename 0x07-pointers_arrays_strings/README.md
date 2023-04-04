More pointers and arrays

***************************************************************
Task 0
Write a fuction that fills memory with a constant byte simillar to memset
memset : set a block of memory to specified value
void *memset(void *s, int c, size_t n);
s: pointer to the block of memory to be filled
b: value to be set
n: number of bytes to be set to the value b
s[i] = b

*****************************************************************
Task 1
Write a fuction that copies memory area . simillar to memcopy
memcopy: used to copy a block of memory from one location to another
takes 3 arguments destination pointer, source pointer and size of the block \ 
of memory to be copied.

void *memcpy(void *dest, const void *src, size_t n);
dest: pointer to the memory location where the contents will be copied to
src: pointer to the memory location where the contents will be copied from
n : number of bytes to be copied
dest[i] = str[i]

*******************************************************************
Task 2
Write a function that locates a character in  a string
strchr : find the first occurrence of a specific character in a string
takes two arguments string and a character
char *strchr(const char *s, int c);
s: pointer to a string in wich the search is performed
c: character to be searched in the string


********************************************************************
Task 3
write a function that gets the length of a prefix substring
strspn : calculates the length of initial substring of the string pointed to s.
s: string to be searched
accept: string with characters to be searched for

********************************************************************
Task 4
write a function that searches a string for any of the set of bytes
strpbrk :find the first occurrence of any character in a set of characters in\ 
in a string
char *_strpbrk(char *s, char *accept);
s: pointer to the string in which to search for charaters
accept: pointer to the string with characters to be searched
eg s = Hello world
accept = world
l is the first letter in world that matches a letter in hello world
output : llo world

*************************************************************************
Task 5
Write a function that locates a substring
hello world: hello and world are substrings
strstr() : searches for the first occurrence of a substring in a string
	   char *_strstr(char *haystack, char *needle);
haystack: pointer to the string to be searched
needle: pointer to the substring to searcch for

***************************************************************************
Task 6
Write a function that prints the chessboard.

    Prototype: void print_chessboard(char (*a)[8]);
***************************************************************************
Task 7
Write a function that prints the sum of the two diagonals of a square matrix\ 
of integers.

****************************************************************************
Task 8
Write a function that sets the value of a pointer to a char

*********************************************************************
Task 9


















