Static libraries

****
Task 0
Create the static library libmy.a containing all the functions listed below:

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

steps to follow
Ensure you have all *.c files and add the prototypes to main.h file
Then create a static library file by:
 - gcc -c -Wall -Werror -Wextra *.c
 - ar -rc libmy.a *.0
Create an index:
 - ranlib libmy.a
list names of the object files in the library
 - ar -t libmy.a
list the symbols defined in those object files
 - nm libmy.a
Using libmy.a library.
step 1 : create a file main.c
step 2: cc -std=gnu89 main.c -L. -lmy -o quote
       - -L : specifies the path (lib might be found in current dir)
       - -lmy: without lib prefix and .a suffix

Task 1
Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
