# Libft

Libft is a custom C library developed as part of the 42 curriculum. The project
reimplements a selection of functions from the C standard library and adds
utilities for strings, memory, file-descriptor output, and singly linked lists.

The library is compiled as a static archive named `libft.a`, so it can be reused
in later C projects.

## Features

### Character checks and conversion

| Function | Description |
| --- | --- |
| `ft_isalpha` | Checks whether a character is alphabetic |
| `ft_isdigit` | Checks whether a character is a decimal digit |
| `ft_isalnum` | Checks whether a character is alphanumeric |
| `ft_isascii` | Checks whether a value belongs to the ASCII set |
| `ft_isprint` | Checks whether a character is printable |
| `ft_toupper` | Converts a lowercase letter to uppercase |
| `ft_tolower` | Converts an uppercase letter to lowercase |

### Memory

| Function | Description |
| --- | --- |
| `ft_memset` | Fills a memory area with a byte |
| `ft_bzero` | Sets a memory area to zero |
| `ft_memcpy` | Copies a non-overlapping memory area |
| `ft_memmove` | Copies a potentially overlapping memory area |
| `ft_memchr` | Searches for a byte in memory |
| `ft_memcmp` | Compares two memory areas |
| `ft_calloc` | Allocates zero-initialized memory |

### Strings

| Function | Description |
| --- | --- |
| `ft_strlen` | Returns the length of a string |
| `ft_strlcpy` | Copies a string into a size-bounded buffer |
| `ft_strlcat` | Appends a string to a size-bounded buffer |
| `ft_strchr` | Finds the first occurrence of a character |
| `ft_strrchr` | Finds the last occurrence of a character |
| `ft_strncmp` | Compares up to `n` characters |
| `ft_strnstr` | Finds a substring within a bounded length |
| `ft_strdup` | Duplicates a string |
| `ft_atoi` | Converts a string to an integer |
| `ft_substr` | Extracts a substring |
| `ft_strjoin` | Joins two strings |
| `ft_strtrim` | Trims characters from both ends of a string |
| `ft_split` | Splits a string using a delimiter |
| `ft_itoa` | Converts an integer to a string |
| `ft_strmapi` | Creates a string by applying a function to each character |
| `ft_striteri` | Applies a function to each character in place |

### File-descriptor output

| Function | Description |
| --- | --- |
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string followed by a newline |
| `ft_putnbr_fd` | Writes an integer to a file descriptor |

### Bonus: linked lists

The bonus part defines a generic singly linked list:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

It provides functions to create, append, prepend, count, iterate, map, and
delete list nodes:

`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`,
`ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, and
`ft_lstmap`.

## Build

Requirements:

- A C compiler such as `cc`
- `make`
- `ar`

Build the mandatory library:

```sh
make
```

Build the library with the bonus linked-list functions:

```sh
make bonus
```

Other available targets:

```sh
make clean   # remove object files
make fclean  # remove object files and libft.a
make re      # rebuild the mandatory library
```

The project is compiled with `-Wall -Wextra -Werror`.

## Usage

Include the header in your C source:

```c
#include "libft.h"
```

Example:

```c
#include "libft.h"
#include <stdlib.h>

int main(void)
{
    char *message;

    message = ft_strjoin("Hello, ", "libft!");
    if (!message)
        return (1);
    ft_putendl_fd(message, 1);
    free(message);
    return (0);
}
```

Compile and link it with the library:

```sh
cc -Wall -Wextra -Werror main.c -L. -lft -o example
./example
```

Functions that create strings, arrays, or list nodes may allocate memory. The
caller is responsible for freeing the returned data when it is no longer
needed.

## Project subject

The complete assignment is available in
[en.subject_libft.pdf](./en.subject_libft.pdf).
