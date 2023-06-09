#Bit Manipulation

TASK 0
Write a function that converts a binary number to an unsigned int.

    Prototype: unsigned int binary_to_uint(const char *b);
    where b is pointing to a string of 0 and 1 chars
    Return: the converted number, or 0 if
        there is one or more chars in the string b that is not 0 or 1
        b is NULL

TASK 1
Write a function that prints the binary representation of a number.

    Prototype: void print_binary(unsigned long int n);
    Format: see example
    You are not allowed to use arrays
    You are not allowed to use malloc
    You are not allowed to use the % or / operators

    **************************************************
    Here are the general steps to convert an integer to binary:

    Determine the binary place values: Start with the rightmost bit, which represents 2^0. The next bit to the left represents 2^1, then 2^2, and so on, with each bit to the left representing the next power of two.

    Divide the decimal number by 2: Divide the decimal number by 2 and note down the quotient and the remainder.

    Repeat the process: Divide the quotient by 2 and again note down the quotient and remainder. Continue this process until the quotient is 0.

    Write the binary number: Write down the remainders in reverse order, starting from the bottom, to get the binary equivalent of the decimal number.
    ***************************************************
Task 2
Write a function that returns the value of a bit at a given index.

    Prototype: int get_bit(unsigned long int n, unsigned int index);
    where index is the index, starting from 0 of the bit you want to get
    Returns: the value of the bit at index index or -1 if an error occured

Task 3
Write a function that sets the value of a bit to 1 at a given index.

    Prototype: int set_bit(unsigned long int *n, unsigned int index);
    where index is the index, starting from 0 of the bit you want to set
    Returns: 1 if it worked, or -1 if an error occurred

TASK 4
Write a function that sets the value of a bit to 0 at a given index.

    Prototype: int clear_bit(unsigned long int *n, unsigned int index);
    where index is the index, starting from 0 of the bit you want to set
    Returns: 1 if it worked, or -1 if an error occurred

Task 5
Write a function that returns the number of bits you would need to flip to get from one number to another.

    Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
    You are not allowed to use the % or / operators

##Advanced
Task 6
Write a function that checks the endianness.

    Prototype: int get_endianness(void);
    Returns: 0 if big endian, 1 if little endian


Task 7

https://medium.com/@bilalbarki/finding-a-password-for-a-protected-file-the-very-basics-3da88a26f37e
To add password to 101-password file: echo $'Hol\x4' > 101-password

Find the password for this program.

    Save the password in the file 101-password
    Your file should contain the exact password, no new line, no extra space

