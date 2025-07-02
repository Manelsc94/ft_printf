# ft_printf

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)
![macOS](https://img.shields.io/badge/macOS-000000?style=for-the-badge&logo=apple&logoColor=white)
![42](https://img.shields.io/badge/42-Project-00BABC?style=for-the-badge)
![Score](https://img.shields.io/badge/Score-100%25-brightgreen?style=for-the-badge)

## 📋 Project Overview

ft_printf is a 42 school project that reimplements the C standard library's `printf()` function. This project focuses on mastering variadic arguments and formatting various data types, enhancing skills in C programming, string manipulation, and modular code design. The resulting `libftprintf.a` library can be integrated into your `libft` for use in future 42 projects. This implementation ensures robust handling of mandatory conversions and adheres to 42's strict coding norms.

## ✨ Key Features

- **Variadic Function Handling**: Processes variable arguments using `va_list` (`va_start`, `va_arg`, `va_end`).
- **Supported Conversions**:
  - `%c`: Prints a single character.
  - `%s`: Prints a string.
  - `%p`: Prints a pointer in hexadecimal format.
  - `%d`, `%i`: Prints a decimal (base 10) integer.
  - `%u`: Prints an unsigned decimal number.
  - `%x`: Prints a hexadecimal number (lowercase).
  - `%X`: Prints a hexadecimal number (uppercase).
  - `%%`: Prints a percent sign.
- **Norm Compliance**: Adheres to 42's coding standards, with no memory leaks or undefined behaviors.
- **Modular Design**: Structured for easy maintenance and potential extension with bonus features.

## 🛠️ Prerequisites

- **Operating System**: UNIX-based (Linux, macOS, etc.).
- **Compiler**: `gcc`.
- **Build Tool**: `make`.

## 🚀 Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/Manelsc94/ft_printf.git
   cd ft_printf
   ```

2. Compile the library:
   ```bash
   make
   ```
   This creates `libftprintf.a` at the root of the repository.


## 📖 Usage

1. Include the library in your project:
   - Copy the `ft_printf` directory into your project folder.
   - Include the header in your source files:
     ```c
     #include "ft_printf.h"
     ```

2. Link the library during compilation:
   ```bash
   gcc -Wall -Wextra -Werror your_program.c -L. -lftprintf
   ```

### Example
```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s! Number: %d, Hex: %x\n", "World", 42, 42);
    return (0);
}
```

**Output:**
```
Hello, World! Number: 42, Hex: 2a
```

## 📂 Project Structure

```
ft_printf/
├── Makefile          # Build automation script
├── ft_printf.h       # Header file with function prototypes
├── src/              # Source files for ft_printf
├── libft/            # Libft library directory
└── libftprintf.a     # Compiled library (generated)
```

## 🛠️ Makefile Commands

| Command       | Description                                    |
|---------------|------------------------------------------------|
| `make`        | Builds the mandatory `libftprintf.a`.          |
| `make clean`  | Removes object files.                          |
| `make fclean` | Removes object files and `libftprintf.a`.      |
| `make re`     | Rebuilds the project from scratch.             |

## 🔍 Technical Details

- **Function Prototype**: `int ft_printf(const char *, ...);`
- **Supported Conversions**: Handles `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`.
- **External Functions**:
  - Allowed: `malloc`, `free`, `write`, `va_start`, `va_arg`, `va_copy`, `va_end`.
- **Constraints**:
  - No buffer management (unlike original `printf`).
  - Compiled with `-Wall -Wextra -Werror`.
  - Uses `ar` to create the library (no `libtool`).
  - Memory allocation must be freed properly (no leaks).

## 📝 Notes

- The bonus part is evaluated only if the mandatory part is flawless.
- Test programs are recommended for development but not submitted.
- All files must be at the repository root or in designated folders (`src/`, `libft/`), with no unused files.

## 📜 License

This project is licensed under the [MIT License](LICENSE).

## 👤 Author

**Manelsc94**  
GitHub: [Manelsc94](https://github.com/Manelsc94)

---

⭐️ If you find this project useful, consider giving it a star on GitHub!
