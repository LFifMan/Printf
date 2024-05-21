# ft_printf Project 🌟

## Introduction 📘

Welcome to the ft_printf project, a custom implementation of the standard C library function printf. This project is part of the 42 curriculum, designed to deepen your understanding of variadic functions, formatting, and output in C.

## Features 🚀

Custom String Printing: Handles strings and outputs them to the standard output.
Hexadecimal Printing: Converts and prints unsigned integers in hexadecimal format.
Modular Codebase: Easily extendable to support more formatting options.

## How It Works 🛠️

The ft_printf function takes a format string and a variable number of arguments. It processes the format string and prints the corresponding arguments according to the specified format.

#### Supported Format Specifiers
%s: Prints a string.
%x: Prints an unsigned integer in lowercase hexadecimal format.
%X: Prints an unsigned integer in uppercase hexadecimal format.

## File Structure 📁

makefile

ft_printf/
├── include/
│   ├── ft_printf.h         # Header file with function prototypes
│   └── libft.h             # Header file for additional library functions
├── libft/
│   ├── Makefile            # Makefile for the libft library
│   └── src/                # Source files for libft library functions
├── src/
│   ├── ft_checkpoint.c     # Checks and prints characters until '%' is found
│   ├── ft_printstr.c       # Prints strings
│   ├── ft_printf.c         # Main printf function implementation
│   └── ft_printhex.c       # Prints numbers in hexadecimal format
└── Makefile                # Makefile for compiling the project

## Usage 💻

#### Clone the repository:

```bash
git clone <repository_url>
cd ft_printf
```

#### Build the project:

```bash
make
```

#### Include ft_printf in your project:

Include the header file in your source code:
```c
#include "ft_printf.h"
```

#### Link the compiled library when building your project.

Example Usage:
```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Number: %x\n", 255);
    return 0;
}
```

#### Makefile Commands 📜

make: Compiles the library.
make clean: Removes object files.
make fclean: Removes object files and the library.
make re: Rebuilds the library.
