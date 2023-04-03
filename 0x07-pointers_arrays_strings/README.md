More pointers and arrays

****
Task 0
Write a fuction that fills memory with a constant byte simillar to memset
memset : set a block of memory to specified value
void *memset(void *s, int c, size_t n);
s: pointer to the block of memory to be filled
b: value to be set
n: number of bytes to be set to the value b
s[i] = b

****
Task 2
Write a fuction that copies memory area . simillar to memcopy
memcopy: used to copy a block of memory from one location to another
takes 3 arguments destination pointer, source pointer and size of the block \ 
of memory to be copied.

void *memcpy(void *dest, const void *src, size_t n);
dest: pointer to the memory location where the contents will be copied to
src: pointer to the memory location where the contents will be copied from
n : number of bytes to be copied
dest[i] = str[i]

****
Task 3
Write a function that locates a character in  a string
strchr : find the first occurrence of a character in a string
takes two arguments string and a character
char *strchr(const char *s, int c);
s: pointer to a string in wich the search is performed
c: character to be searched in the string

