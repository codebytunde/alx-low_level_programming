# 0x10. C - Variadic functions

### Beauty is variable, ugliness is constant

This is a C function that calculates the sum of all its parameters. The function is called `sum_them_all` and takes a variable number of arguments. If the number of arguments (`n`) is 0, it returns 0.

## Prototype

```c
int sum_them_all(const unsigned int n, ...);
```

In the provided prototype, `sum_them_all` is a C function that takes an unsigned integer `n` and a variable number of arguments. It returns an integer, and if `n` is 0, it returns 0.

# To be is to be the value of a variable

This is a C function that prints numbers, followed by a new line. The function is called `print_numbers` and accepts a separator string, the number of integers to print, and the integers themselves as variable arguments. It utilizes `printf` to perform the printing.

## Prototype

```c
void print_numbers(const char *separator, const unsigned int n, ...);
```

## Parameters

- `separator` (type: `const char *`): The string to be printed between numbers. If `separator` is `NULL`, it won't be printed.
- `n` (type: `const unsigned int`): The number of integers to be printed.
- `...` (variable arguments): The integers to be printed.

## Function Behavior

- The function prints the specified integers.
- It uses the provided `separator` string to separate the printed integers. If `separator` is `NULL`, no separator is printed.
- It prints a new line at the end of the output.

**Note**: To implement this function, you can use the `printf` function to format and print the integers as specified in the prototype.

# One woman's constant is another woman's variable

This is a C function that prints strings, followed by a new line. The function is called `print_strings` and accepts a separator string, the number of strings to print, and the strings themselves as variable arguments. It utilizes `printf` to perform the printing.

## Prototype

```c
void print_strings(const char *separator, const unsigned int n, ...);
```

## Parameters

- `separator` (type: `const char *`): The string to be printed between the strings. If `separator` is `NULL`, it won't be printed.
- `n` (type: `const unsigned int`): The number of strings to be printed.
- `...` (variable arguments): The strings to be printed.

## Function Behavior

- The function prints the specified strings.
- It uses the provided `separator` string to separate the printed strings. If `separator` is `NULL`, no separator is printed.
- If one of the strings passed to the function is `NULL`, it prints "(nil)" instead.
- It prints a new line at the end of the output.

**Note**: To implement this function, you can use the `printf` function to format and print the strings as specified in the prototype. You should check each string in the variable arguments and print "(nil)" if a string is `NULL`.

# To be is a to be the value of a variable

This is a C function that prints data of various types based on a format string. The function is called `print_all` and accepts a format string and corresponding arguments to print. It supports different format specifiers for characters, integers, floats, and strings. If a string argument is `NULL`, it prints "(nil)" instead.

## Prototype

```c
void print_all(const char * const format, ...);
```

## Parameters

- `format` (type: `const char * const`): A format string specifying the types of arguments to be printed. It supports the following format specifiers:
    - `c`: for characters
    - `i`: for integers
    - `f`: for floats
    - `s`: for strings

## Function Behavior

- The function prints the provided arguments according to the format string.
- If the format string specifies a type not listed above, it is ignored.
- If the format string specifies a string (`s`) and the corresponding argument is `NULL`, it prints "(nil)" instead.
- The function prints a new line at the end of the output.

## Example Usage

```c
int main() {
    char c = 'H';
    int i = 42;
    float f = 3.14;
    char *s = "Hello, World!";
    char *nullString = NULL;

    print_all("cifs", c, i, f, s);  // Output: H 42 3.140000 Hello, World!
    print_all("sic", s, i, c);     // Output: (nil) 42 H
    print_all("fsc", f, s, c);     // Output: 3.140000 Hello, World! H
    print_all("si", s, i);         // Output: (nil) 42

    return 0;
}
```

In this example, the `print_all` function takes a format string and corresponding arguments, printing the data in the specified format while handling `NULL` strings as "(nil)."

