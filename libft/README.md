*This project has been created as part of the 42 curriculum by flanghof.*

# libft

## Description

The **libft** project consists of creating a personal C library that reimplements a set
of standard C library functions, along with additional utility functions.  
The goal of this project is to strengthen understanding of low-level programming in C,
including memory management, string manipulation, and code structure.

This library is designed to be reused in future 42 projects and serves as a solid
foundation for more advanced development.

## Detailed Library Description

The **libft** library provides a collection of commonly used functions, implemented
from scratch and organized into the following categories:

### Memory Management Functions

These functions handle raw memory operations and dynamic allocation:

- `ft_memset` – fills a memory area with a constant byte  
- `ft_bzero` – sets a memory area to zero  
- `ft_memcpy` – copies memory from one area to another  
- `ft_memmove` – copies memory while safely handling overlapping regions  
- `ft_memchr` – locates a byte in memory  
- `ft_memcmp` – compares memory areas  
- `ft_calloc` – allocates memory and initializes it to zero, including protection
  against integer overflow and defined behavior for zero-sized allocations

### String Manipulation Functions

Functions used to manipulate null-terminated strings:

- `ft_strlen` – returns the length of a string  
- `ft_strlcpy` / `ft_strlcat` – size-limited string copy and concatenation  
- `ft_strchr` / `ft_strrchr` – locate characters in a string  
- `ft_strncmp` – compare strings  
- `ft_strnstr` – locate a substring within a string  
- `ft_strdup` – duplicate a string using dynamic memory allocation

### Character Classification and Conversion

Functions that analyze or transform characters:

- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`  
- `ft_isascii`, `ft_isprint`  
- `ft_toupper`, `ft_tolower`

### Numeric Conversion

- `ft_atoi` – converts a string to an integer, handling whitespace and sign characters

### File Descriptor Output Functions

Utility functions for writing output to file descriptors:

- `ft_putchar_fd` – outputs a character  
- `ft_putstr_fd` – outputs a string  
- `ft_putendl_fd` – outputs a string followed by a newline  
- `ft_putnbr_fd` – outputs an integer

### Linked List Functions

The third part of the project introduces a singly linked list structure and associated
utility functions:

- `ft_lstnew` – creates a new list node  
- `ft_lstadd_front` / `ft_lstadd_back` – adds nodes to a list  
- `ft_lstsize` – counts the number of elements in a list  
- `ft_lstlast` – retrieves the last node of a list  
- `ft_lstdelone` / `ft_lstclear` – deletes nodes and frees memory  
- `ft_lstiter` – iterates over a list  
- `ft_lstmap` – creates a new list by applying a function to each element

All functions follow the behavior described in the project subject and standard C
documentation, with careful handling of edge cases and memory safety.

## Instructions

### Compilation

To compile the library, run:

make

To remove object files, run:

make clean

To remove object files and the library, run:

make fclean

To recompile everything, run:

make re

To use the library in your projects include, write the following line
at the beginning of your code:

#include "libft.h"

And compile your program as followed:

cc main.c -L. -lft

## Resources

### References

- `man malloc`, `man free`, `man calloc`
- GNU C Library Documentation
- cppreference.com – C standard library reference
- 42 intra documentation and libft project subject

### Use of AI

AI tools were used solely as a learning aid during this project. Specifically, AI was
used to:
- Clarify the expected behavior of standard C library functions
- Analyze edge cases and undefined or implementation-defined behavior
  (e.g., zero-sized allocations in `calloc`)
- Improve documentation clarity and structure
- Explain syntax and standards of READMEs and Makefiles

All code was written, reviewed, and tested manually by the author to ensure full
understanding of the implementation and full compliance with the 42 curriculum rules.
