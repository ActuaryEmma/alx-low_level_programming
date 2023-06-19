** Dynamic Libraries **
********************************************
TASK 0

Create the dynamic library libdynamic.so containing all the functions listed below:

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

Solution
1. gcc -c -fPIC *.c
2. gcc *.o -shared -o libdynamic.so
3. nm -D libdynamic.so 
4. LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
5. gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len
6. ldd len

** https://medium.com/@kenneth.ca95/how-to-create-a-dynamic-library-in-c-baa473148d00 **

***********************************************
TASK 1

Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.
