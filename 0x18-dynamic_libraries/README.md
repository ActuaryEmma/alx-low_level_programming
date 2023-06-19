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
#### create object files
1. gcc -c -fPIC *.c
#### link object files into a dynamic library
2. gcc *.o -shared -o libdynamic.so
#### inspect/ list symbols in libraries/object files
3. nm -D libdynamic.so 
#### 
4. export  LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
5. gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len
6. ldd len

** https://medium.com/@kenneth.ca95/how-to-create-a-dynamic-library-in-c-baa473148d00 **

***********************************************
TASK 1

Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.


********************************************
TASK 2
Create a dynamic library that contains C functions that can be called from Python.

solution
- create a c file 
- gcc -fPIC -shared -o 100-operations.so *.c
- python3 100-tests.py 

*********************************************
TASK 3
I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?

    Our mole got us a copy of the program, you can download it here. Our mole also gave us a piece of documentation:

/* Giga Millions program
  * Players may pick six numbers from two separate pools of numbers:
  * - five different numbers from 1 to 75 and
  * - one number from 1 to 15
  * You win the jackpot by matching all six winning numbers in a drawing.
  * Your chances to win the jackpot is 1 in 258,890,850
  *
  * usage: ./gm n1 n2 n3 n4 n5 bonus

    You can't modify the program gm itself as Master Sysadmin Sylvain (MSS) always checks its MD5 before running it
    The system is an Linux Ubuntu 16.04
    The server has internet access
    Our mole will be only able to run two commands from a shell script, without being detected by MSS
    Your shell script should be maximum 3 lines long. You are not allowed to use ;, &&, ||, |, ` (it would be detected by MSS), and have a maximum of two commands
    Our mole has only the authorization to upload one file on the server. It will be your shell script
    Our mole will run your shell script this way: mss@gm_server$ . ./101-make_me_win.sh
    Our mole will run your shell script from the same directory containing the program gm, exactly 98 seconds before MSS runs gm with my numbers: ./gm 9 8 10 24 75 9
    MSS will use the same terminal and session than our mole
    Before running the gm program, MSS always check the content of the directory
    MSS always exit after running the program gm
    TL;DR; This is what is going to happen
solution:
- clone the repo
- we have to inject the code so that the behaivor of the code can be changed.  To do that we have to look at the library calls used by the program gm by running `ldd ./gm`
- it uses the std c lib from .libc.so shared object
- to get more info run `ltrace .gm` to keep track all library calls
- we should have to run the program with the usage given by them ` ltrace ./gm 9 8 10 24 75 9
- The program used function calls: atoi, time, srand, printf, rand, puts

- we can inject one of the library functions to change the behavior of the program gm.
- we can inject printf function. To do this i will create a new c file that can inject using printf function which will result changing the behaviour of the program.

- To inject we have to use exact defination of those functions.
- Add the printf prototype
- But , we dont know what we want to display when we win the jackpot. Lets us run strings gm to find out the content.

when we win we have have the text "Congra........."
- Now we will print this text and force program gm to print it out
- To inject the program with code on task2.c :  
--- let us first create the shared object file
 ---- gcc -fpic -c task2.c
 ---- gcc -shared -o libtest.so task2.o

 - Generate the .so file . Do the code ingection and change the behavior of the program
 - Use LD_PRELOAD environment variable : PWD is to to hold the CWD and used to specify where to find .so shared object for injection
   LD_PRELOAD=/$PWD/libtest.so ./gm 9 8 10 24 75 9

- we have successfully injected but the printf is printing multiple times  . Use the exit funtion to prevent printing multiple times
` gcc -fpic -c task2.c `
` gcc -shared -o libtest.so task2.o `
` LD_PRELOAD=/$PWD/libtest.so ./gm 9 8 10 24 75 9 `

