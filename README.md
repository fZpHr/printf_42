## *For more information, please refer to the subject in the git.*

## Printf

The Printf project involves creating a custom implementation of the printf function in C, which allows formatted output to be printed to the standard output stream. This project requires understanding of variable argument lists, parsing, and formatting strings according to specifiers.

### Execution Examples

To use the custom printf function, include the header file `ft_printf.h` in your C source code. Here are some examples of how to use it:

```c
#include "ft_printf.h"

int main()
{
    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", "Hello, world!");
    ft_printf("Pointer address: %p\n", (void *)0x12345678);
    ft_printf("Decimal: %d\n", 42);
    ft_printf("Integer: %i\n", -123);
    ft_printf("Unsigned decimal: %u\n", 12345);
    ft_printf("Lowercase hexadecimal: %x\n", 255);
    ft_printf("Uppercase hexadecimal: %X\n", 255);
    ft_printf("Percent sign: %%\n");
    return 0;
}
```

When compiled and executed, this code will produce the following output:

```
Character: A
String: Hello, world!
Pointer address: 0x12345678
Decimal: 42
Integer: -123
Unsigned decimal: 12345
Lowercase hexadecimal: ff
Uppercase hexadecimal: FF
Percent sign: %
```

## Compilation

To compile the source code:
```bash
make
```

This command will generate the object files and create the executable file named `ft_printf`.
