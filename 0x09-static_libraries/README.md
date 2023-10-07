# 0. A library is not a luxury but one of the necessities of life

In this task, I was required to create a static library named `libmy.a` containing various functions. These functions were implemented in individual `.c` files. The functions and their prototypes are listed below:

- int _putchar(char c);
- int _islower(int c);
- int _isalpha(int c);
- int _abs(int n);
- int _isupper(int c);
- int _isdigit(int c);
- int _strlen(char *s);
- void _puts(char *s);
- char *_strcpy(char *dest, char *src);
- int _atoi(char *s);
- char *_strcat(char *dest, char *src);
- char *_strncat(char *dest, char *src, int n);
- char *_strncpy(char *dest, char *src, int n);
- int _strcmp(char *s1, char *s2);
- char *_memset(char *s, char b, unsigned int n);
- char *_memcpy(char *dest, char *src, unsigned int n);
- char *_strchr(char *s, char c);
- unsigned int _strspn(char *s, char *accept);
- char *_strpbrk(char *s, char *accept);
- char *_strstr(char *haystack, char *needle);

If any of the above functions were not implemented, empty functions with the correct prototypes were expected.

I was also reminded to push the `main.h` file to my repository. The `main.h` file should contain prototypes for all the functions listed above.

After completing this task, I compiled the static library and tested it with a sample program in `main.c`, which demonstrated that the library works correctly.

## Task 1: Create a script to generate a static library

```markdown
# 1. Without libraries, what have I? I have no past and no future

In this task, I was required to create a script called `create_static_lib.sh` that generates a static library named `liball.a` from all the `.c` files present in the current directory.

I provided a list of `.c` files in the current directory:
- 0-isupper.c
- 0-strcat.c
- 1-isdigit.c
- 1-strncat.c
- 2-strlen.c
- 3-islower.c
- 3-strcmp.c
- 4-isalpha.c
- 5-strstr.c
- 9-strcpy.c
- _putchar.c
- 0-memset.c
- 100-atoi.c
- 1-memcpy.c
- 2-strchr.c
- 2-strncpy.c
- 3-puts.c
- 3-strspn.c
- 4-strpbrk.c
- 6-abs.c

I executed the script and successfully created the static library `liball.a` containing the compiled object files from these source files.

The repository for this task can be found on GitHub in the `alx-low_level_programming` repository, specifically within the `0x09-static_libraries` directory, and includes the `create_static_lib.sh` script.

