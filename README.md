<h1 align="center">
	📚 Libft
</h1>

<p align="center">
	<img alt="Code bytes" src="https://img.shields.io/github/languages/code-size/jose5556/libft?color=lightblue" />
	<img alt="Code language" src="https://img.shields.io/github/languages/count/jose5556/libft?color=yellow" />
	<img alt="Top language" src="https://img.shields.io/github/languages/top/jose5556/libft?color=blue" />
	<img alt="Last commit" src="https://img.shields.io/github/last-commit/jose5556/libft?color=green" />
</p>

# 💡 About the project

This project, represents my own **Libft**, 
a custom C library created by me that extend the capabilities of the standard C library.
Libft is a useful library that helped me for many C projects, providing optimized and reusable utility functions. 
The project is divided into different folders:

- **char**
- **get_next_line**
- **input_output**
- **memory**
- **string**
- **utility**

# 🔍 Overview

Each function is organized inside each correspondent folder.

- **char** -> All functions that receive and handles a single character;

- **get_next_line** -> Custom function that reads a single line each time its called from a desired file descriptor;

- **input_output** -> Functions like ft_printf (my own implementation of printf)
and some more with the objective of print the desire input to the desire output;

- **memory** -> A collection of functions that handles memory, such as ft_calloc or ft_memset;

- **string** -> Functions with the porpuse of do a desirable behavior to a string;

- **utility** -> Some extra function like ft_atoi or ft_itoa that, for now, doesnt have a folder specifically for itself;

# 🛠️ Usage

### Requirements

This project is written in **C** and requires the **`cc` compiler**.

### Compilation

To compile the full library, run:

```shell
$ make
```
If you are using a makefile, consider add the following instruction to it:

```shell
$(LIBFT):
	@make -C $(LIBFT_DIR)
```

Than, don't forget to update your .h file:

```shell
# include "../libs/libft/libft.h"
```

### Simple example of a libft implemented in a program:

```shell
#include "libft.h"

int main()
{
    char *str;

    str = ft_strdup("Hello, Libft!");
    ft_printf("%s\n", str);
    free(str);
    return (0);
}
```

# 📌 Note

- **get_next_line** function requires BUFFER_SIZE to be defined at compilation.
If unsure, the default define of the value is 42 and you dont need to modify anythig.

- **ft_printf** supports various format specifiers, similar to the standard printf, however it isnt fully complete, so it only
accepts, for now, %c, %s, %p, %d, %i, %u, &x, %X and %%.

Feel free to explore the libft.h, and use this library as much as you want.
