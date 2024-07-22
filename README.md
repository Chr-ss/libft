# Libft: Your Very First Own Library

Welcome to the Libft project! This project is about coding a C library, which will contain a variety of general-purpose functions that your programs will rely upon.

## Table of Contents

- [Introduction](#introduction)
- [Common Instructions](#common-instructions)
- [Mandatory Part](#mandatory-part)
  - [Technical Considerations](#technical-considerations)
  - [Part 1 - Libc Functions](#part-1---libc-functions)
  - [Part 2 - Additional Functions](#part-2---additional-functions)
- [Bonus Part](#bonus-part)
- [Submission and Peer-evaluation](#submission-and-peer-evaluation)

## Introduction

C programming can be very tedious when one doesn’t have access to the highly useful standard functions. This project is about understanding the way these functions work, implementing, and learning to use them. You will create your own library. It will be helpful since you will use it in your next C school assignments.

Take the time to expand your libft throughout the year. However, when working on a new project, don’t forget to ensure the functions used in your library are allowed in the project guidelines.

## Common Instructions

- Your project must be written in C.
- Your project must be written in accordance with the Norm. If you have bonus files/functions, they are included in the norm check and you will receive a 0 if there is a norm error inside.
- Your functions should not quit unexpectedly (segmentation fault, bus error, double free, etc.) apart from undefined behaviors. If this happens, your project will be considered non-functional and will receive a 0 during the evaluation.
- All heap-allocated memory space must be properly freed when necessary. No leaks will be tolerated.
- If the subject requires it, you must submit a Makefile which will compile your source files to the required output with the flags `-Wall`, `-Wextra`, and `-Werror`, use `cc`, and your Makefile must not relink.
- Your Makefile must at least contain the rules `$(NAME)`, `all`, `clean`, `fclean`, and `re`.
- To turn in bonuses to your project, you must include a rule `bonus` to your Makefile, which will add all the various headers, libraries, or functions that are forbidden on the main part of the project. Bonuses must be in a different file `_bonus.{c/h}` if the subject does not specify anything else. Mandatory and bonus part evaluation is done separately.
- If your project allows you to use your libft, you must copy its sources and its associated Makefile in a `libft` folder with its associated Makefile. Your project’s Makefile must compile the library by using its Makefile, then compile the project.
- We encourage you to create test programs for your project even though this work won’t have to be submitted and won’t be graded. It will give you a chance to easily test your work and your peers’ work. You will find those tests especially useful during your defense. Indeed, during defense, you are free to use your tests and/or the tests of the peer you are evaluating.
- Submit your work to your assigned git repository. Only the work in the git repository will be graded. If Deepthought is assigned to grade your work, it will be done after your peer evaluations. If an error happens in any section of your work during Deepthought’s grading, the evaluation will stop.

## Mandatory Part

### Technical Considerations

- Declaring global variables is forbidden.
- If you need helper functions to split a more complex function, define them as static functions. This way, their scope will be limited to the appropriate file.
- Place all your files at the root of your repository.
- Turning in unused files is forbidden.
- Every .c file must compile with the flags `-Wall -Wextra -Werror`.
- You must use the command `ar` to create your library. Using the `libtool` command is forbidden.
- Your `libft.a` has to be created at the root of your repository.

### Part 1 - Libc Functions

To begin, you must redo a set of functions from the libc. Your functions will have the same prototypes and implement the same behaviors as the originals. They must comply with the way they are defined in their man. The only difference will be their names. They will begin with the `ft_` prefix. For instance, `strlen` becomes `ft_strlen`.

Some of the functions’ prototypes you have to redo use the `restrict` qualifier. This keyword is part of the C99 standard. It is therefore forbidden to include it in your own prototypes and to compile your code with the `-std=c99` flag.

You must write your own function implementing the following original ones. They do not require any external functions:

- isalpha
- isdigit
- isalnum
- isascii
- isprint
- strlen
- memset
- bzero
- memcpy
- memmove
- strlcpy
- strlcat
- toupper
- tolower
- strchr
- strrchr
- strncmp
- memchr
- memcmp
- strnstr
- atoi

In order to implement the two following functions, you will use `malloc()`:

- calloc
- strdup

### Part 2 - Additional Functions

In this second part, you must develop a set of functions that are either not in the libc, or that are part of it but in a different form.

Some of the following functions can be useful for writing the functions of Part 1.

- Function name: `ft_substr`
  - Prototype: `char *ft_substr(char const *s, unsigned int start, size_t len);`
  - Parameters:
    - `s`: The string from which to create the substring.
    - `start`: The start index of the substring in the string `s`.
    - `len`: The maximum length of the substring.
  - Return value: The substring. `NULL` if the allocation fails.
  - External functions: `malloc`
  - Description: Allocates (with `malloc(3)`) and returns a substring from the string `s`. The substring begins at index `start` and is of maximum size `len`.

- Function name: `ft_strjoin`
  - Prototype: `char *ft_strjoin(char const *s1, char const *s2);`
  - Parameters:
    - `s1`: The prefix string.
    - `s2`: The suffix string.
  - Return value: The new string. `NULL` if the allocation fails.
  - External functions: `malloc`
  - Description: Allocates (with `malloc(3)`) and returns a new string, which is the result of the concatenation of `s1` and `s2`.

- Function name: `ft_strtrim`
  - Prototype: `char *ft_strtrim(char const *s1, char const *set);`
  - Parameters:
    - `s1`: The string to be trimmed.
    - `set`: The reference set of characters to trim.
  - Return value: The trimmed string. `NULL` if the allocation fails.
  - External functions: `malloc`
  - Description: Allocates (with `malloc(3)`) and returns a copy of `s1` with the characters specified in `set` removed from the beginning and the end of the string.

- Function name: `ft_split`
  - Prototype: `char **ft_split(char const *s, char c);`
  - Parameters:
    - `s`: The string to be split.
    - `c`: The delimiter character.
  - Return value: The array of new strings resulting from the split. `NULL` if the allocation fails.
  - External functions: `malloc`, `free`
  - Description: Allocates (with `malloc(3)`) and returns an array of strings obtained by splitting `s` using the character `c` as a delimiter. The array must end with a `NULL` pointer.

- Function name: `ft_itoa`
  - Prototype: `char *ft_itoa(int n);`
  - Parameters:
    - `n`: the integer to convert.
  - Return value: The string representing the integer. `NULL` if the allocation fails.
  - External functions: `malloc`
  - Description: Allocates (with `malloc(3)`) and returns a string representing the integer received as an argument. Negative numbers must be handled.

- Function name: `ft_strmapi`
  - Prototype: `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`
  - Parameters:
    - `s`: The string on which to iterate.
    - `f`: The function to apply to each character.
  - Return value: The string created from the successive applications of `f`. Returns `NULL` if the allocation fails.
  - External functions: `malloc`
  - Description: Applies the function `f` to each character of the string `s`, passing its index as the first argument and the character itself as the second. A new string is created (using `malloc(3)`) to collect the results from the successive applications of `f`.

- Function name: `ft_striteri`
  - Prototype: `void ft_striteri(char *s, void (*f)(unsigned int, char*));`
  - Parameters:
    - `s`: The string on which to iterate.
    - `f`: The function to apply to each character.
  - Return value: None
  - External functions: None
  - Description: Applies the function `f` on each character of the string passed as argument, passing its index as the first argument. Each character is passed by address to `f` to be modified if necessary.

- Function name: `ft_putchar_fd`
  - Prototype: `void ft_putchar_fd(char c, int fd);`
  - Parameters:
    - `c`: The character to output.
    - `fd`: The file descriptor on which to write.
  - Return value: None
  - External functions: `write`
  - Description: Outputs the character `c` to the given file descriptor.

- Function name: `ft_putstr_fd`
  - Prototype: `void ft_putstr_fd(char *s, int fd);`
  - Parameters:
    - `s`: The string to output.
    - `fd`: The file descriptor on which to write.
  - Return value: None
  - External functions: `write`
  - Description: Outputs the string `s` to the given file descriptor.

- Function name: `ft_putendl_fd`
  - Prototype: `void ft_putendl_fd(char *s, int fd);`
  - Parameters:
    - `s`: The string to output.
    - `fd`: The file descriptor on which to write.
  - Return value: None
  - External functions: `write`
  - Description: Outputs the string `s` to the given file descriptor followed by a newline.

- Function name: `ft_putnbr_fd`
  - Prototype: `void ft_putnbr_fd(int n, int fd);`
  - Parameters:
    - `n`: The integer to output.
    - `fd`: The file descriptor on which to write.
  - Return value: None
  - External functions: `write`
  - Description: Outputs the integer `n` to the given file descriptor.

## Bonus Part

If you completed the mandatory part, do not hesitate to go further by doing this extra one. It will bring bonus points if passed successfully.

Functions to manipulate memory and strings are very useful. But you will soon discover that manipulating lists is even more useful.

You have to use the following structure to represent a node of your list. Add its declaration to your `libft.h` file:

```c
typedef struct s_list
{
  void *content;
  struct s_list *next;
} t_list;
