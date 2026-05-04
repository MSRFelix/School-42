*This project has been created as part of the 42 curriculum by flanghof.*

# get_next_line

## Description

The `get_next_line` project is part of the 42 curriculum and aims to implement a function in C 
that reads a file descriptor **line by line**. The main goal is to understand **buffered reading**, 
memory management, and how to handle static variables in C.  

The project allows reading both from **files** and **standard input (stdin)**. Each call to the 
`get_next_line` function returns the **next line** from the file, including the newline character 
`\n` when present. If the end of the file is reached or an error occurs, the function returns `NULL`.

## Instructions

### Compilation

The project can be compiled using the following command (example with BUFFER_SIZE = 42):

cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c \
    get_next_line_utils.c 

## Resources

- [GNU C Library - read](https://man7.org/linux/man-pages/man2/read.2.html)  
  Official documentation for the `read()` system call used to read from file descriptors.

- [GNU C Library - malloc and free](https://man7.org/linux/man-pages/man3/malloc.3.html)  
  Reference for dynamic memory allocation functions used in this project.

- [Norminette documentation](https://github.com/42School/norminette)  
  Guidelines and rules for 42 coding style compliance.

- AI was used to assist in:
  - Structuring the project and README.  
  - Explaining and optimizing the algorithm.  
  - Clarifying memory management and edge cases.  

## Algorithm Explanation

The `get_next_line` function uses the following approach:

1. **Static buffer (stash)**:  
   - Keeps leftover content from previous reads to avoid losing data between calls.  

2. **Buffered reading**:  
   - The file descriptor is read in chunks of size `BUFFER_SIZE` using `read()`.  
   - Each chunk is appended to the stash until a newline `\n` is found or EOF is reached.  

3. **Line extraction**:  
   - Once a newline is found, the line is extracted from the stash including the `\n`.  

4. **Updating the stash**:  
   - After extracting a line, the stash is updated to keep only the remaining characters for the next call.  

5. **Memory management**:  
   - Dynamic memory allocation is used for strings.  
   - Old buffers are freed after joining or extracting substrings to prevent leaks.  

This approach ensures efficient memory use, correct line-by-line reading, and correct handling of 
files or stdin with arbitrary sizes.
