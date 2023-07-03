# libft
## libft Project

### Created Functions:

- `memset`: Fills a block of memory with a specific value.
- `bzero`: Sets a block of memory to zero, setting all bytes to zero.
- `memcpy`: Copies a block of memory from the source area to the destination area.
- `memccpy`: Copies a block of memory from the source area to the destination area until a specified character is found.
- `memmove`: Copies a block of memory, handling overlapping areas of source and destination correctly.
- `memchr`: Searches for a specific character in a block of memory.
- `memcmp`: Compares two blocks of memory.
- `strlen`: Calculates the length of a string.
- `strdup`: Creates a dynamically allocated copy of a string.
- `strcpy`: Copies a string from the source area to the destination area.
- `strncpy`: Copies a string from the source area to the destination area with a specified maximum size.
- `strcat`: Concatenates two strings.
- `strncat`: Concatenates two strings with a specified maximum size.
- `strlcat`: Concatenates two strings with a specified maximum size, avoiding buffer overflow.
- `strchr`: Finds the first occurrence of a character in a string.
- `strrchr`: Finds the last occurrence of a character in a string.
- `strstr`: Finds the first occurrence of a substring in a string.
- `strnstr`: Finds the first occurrence of a substring in a string with a specified maximum size.
- `strcmp`: Compares two strings.
- `strncmp`: Compares two memory blocks of strings with a specified maximum size.
- `atoi`: Converts a string to an integer value.
- `isalpha`: Checks if a character is an alphabetic letter.
- `isdigit`: Checks if a character is a numeric digit.
- `isalnum`: Checks if a character is an alphabetic letter or a numeric digit.
- `isascii`: Checks if a character is an ASCII value.
- `isprint`: Checks if a character is a printable (visible) character.
- `toupper`: Converts a character to uppercase.
- `tolower`: Converts a character to lowercase.

<hr>
<br><br>

# Explanation of the makefile

```
NAME = libft.a

SRC = ft_bzero.c ft_memchr.c ft_memcpy.c
ft_memset.c ft_strchr.c ft_strdup.c
ft_strlen.c ft_strncpy.c ft_memccpy.c
ft_memcmp.c ft_memmove.c ft_strcat.c
ft_strcpy.c ft_strlcat.c ft_strncat.c
ft_strrchr.c ft_strrchr.c ft_strstr.c
ft_strncmp.c ft_strnstr.c ft_atoi.c
ft_strcmp.c ft_isalpha.c ft_isdigit.c
ft_isalnum.c ft_isascii.c ft_isprint.c
ft_toupper.c ft_tolower.c
```

<p>
In this section, the variables NAME and SRC are defined. NAME specifies the name of the library file to be generated (libft.a), and SRC contains the list of source files (.c) required to build the library.
</p>
<hr>



```
OBJS = ${SRC:.c=.o}
CC = cc
CFLAGS = -Wall -Wextra -Werror
HEADER = libft.h
MAIN = main
TEST_FOLDER = tests
```

<p>
Here, OBJS is a variable that stores the list of object files (.o) derived from the source files. CC specifies the compiler to be used (in this case, cc). CFLAGS are the compiler options, including -Wall (enable detailed warnings), -Wextra (enable extra warnings), and -Werror (treat warnings as errors). HEADER specifies the name of the header file (.h) for the library, and MAIN is an arbitrary name given to the main executable. TEST_FOLDER is the directory where the test files are located.
</p>
<hr>

```
all: ${NAME}

${NAME}: ${OBJS} ${HEADER}
ar -rcs ${NAME} ${OBJS} ${HEADER}
```

<p>
In the all rule, the target is the libft.a file. The rule states that the target file depends on the object files and the header file. The action is to execute the ar command to create the libft.a file from the object files and the header file.
</p>
<hr>


```
.c.o:
${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
```

<p>
This is an implicit rule that indicates how to create object files (.o) from source files (.c). The action is to execute the cc command with the options defined in CFLAGS to compile each source file individually.
</p>
<hr>

```
clean:
${RM} ${OBJS} libft.so *.out

fclean: clean
${RM} ${NAME}

re: fclean all
```

<p> The clean, fclean, and re rules are cleanup and rebuild rules. The clean rule removes the object files, the shared library file libft.so (if it exists), and all files with the .out extension. The fclean rule depends on the clean rule and additionally removes the library file specified by NAME. The re rule depends on the fclean rule and the all rule, allowing for a complete rebuild of the library.
</p>

Let me know if there's anything else I can help you with!

<hr>
<br>

# Explanation of `libft.h`
- The `#ifndef` and `#define` directives are used to prevent duplicate inclusion of the header file, ensuring that it is included only once during compilation.
- Next, there are include statements for other standard header files such as `stdlib.h`, `unistd.h`, `string.h`, and `stddef.h`, which provide declarations and definitions for functions and types used in the library function implementations.
- Following that, there are some useful macros defined, such as `TRUE` and `FALSE` to represent boolean values, `INT_MAX` and `INT_MIN` to represent the maximum and minimum values of an integer, `ULONG_MAX` to represent the maximum value of an unsigned long, and `NULL_BYTE` to represent the size of a null byte (`'\0'`).
- Then, the function prototypes for the library functions are declared, such as `ft_strlen`, `ft_strncat`, `ft_bzero`, and so on. Each prototype specifies the return type of the function and the expected parameters.
- Finally, the `#endif` directive is used to close the `#ifndef`/`#define` structure, ending the header file's definition.