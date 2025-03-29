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

This project **Libft**, 
a custom C library I created to extend the capabilities of the standard C library.
It provides optimized and reusable utility functions that have been helpful across multiple C projects.

The project is organized into different folders based on function types:

- **char**
- **get_next_line**
- **input_output**
- **memory**
- **string**
- **utility**

# 🔍 Overview

Each function is categorized into the appropriate folder:

- **char** -> Functions that operate on a single character (e.g., checking character types).

- **get_next_line** -> Reads a single line at a time from a given file descriptor.

- **input_output** -> Functions like `ft_printf` (a custom `printf` implementation) and others that handle input/output

- **memory** -> A collection of functions for memory management, such as `ft_calloc` and `ft_memset`.

- **string** -> Functions that manipulate strings, such as concatenation, duplication, and length calculation.

- **utility** -> Miscellaneous helper functions like `ft_atoi` and `ft_itoa`, which don’t fit into the other categories.

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
If unsure, the default value is 42, and no modifications are needed.

- **ft_printf** supports various format specifiers, similar to the standard printf, but it is not fully complete.
Currently supported specifiers: %c, %s, %p, %d, %i, %u, %x, %X, and %%.

Feel free to explore libft.h and use this library as much as you want!
