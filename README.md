Implementation of C function : printf

```c
int  my_printf(char *format, ...);
```

###To use it:

`
make
`
And you will get two libraries.
Compile with it to use my_printf function.
Example with the file `test.c` given in test folder
`gcc test/test.c libmy_printf_'uname -m'-'uname -s'.a`
or `gcc test/test.c libmy_printf_'uname -m'-'uname -s'.so`
`uname -m` and `uname -s` depends on your system

###Syntax to format:

    % [flags] [width] [.precision] [length modifier] specifier type

####Flags:

| Flag       | Description                                               |
|------------|------------------------------------------------------|
| `+`        | Sign displayed even if positive number is passed.                |
| `#`        | 	Used with o, x or X specifiers the value is preceeded with 0, 0x or 0X respectively for values different than zero.                |

####Width:

If defined, width allows you to print only `n` characters where n is equal to what you has assigned to width

#####Example:
```c
my_printf("%10d\n", 42);
```
will result to
```c
        42
```

####Precision:

If defined, precision allows you to print only `n` characters of your variable where n is equal to what you has assigned to precision.
Precision number is define after a dot `.`

#####Example:
```c
my_printf("%.2f\n", 2.0012);
```
will result to
```c
2.00
```
(For %f specifier type, precision number is used to display only `n` after the dot `n` of the float
To know more about the precision, please go there : http://man7.org/linux/man-pages/man3/sprintf.3.html

####Specifiers type:

| Specifier type  | Output format                            |
|------------|------------------------------------------|
| `d` or `i` | Signed decimal integer                   |
| `u`        | 	Unsigned decimal integer                |
| `o`        | Unsigned octal integer                   |
| `x`        | Unsigned hexadecimal integer             |
| `X`        | Unsigned hexadecimal integer (uppercase) |
| `f`        | Decimal floating point, lowercase        |
| `e`        | Scientific notation (mantissa/exponent), lowercase                   |
| `E`        | Scientific notation (mantissa/exponent), uppercase                   |
| `c`        | Character                                |
| `s`        | String of characters                     |
| `p`        | Pointer address                          |
| `n`        | Lenght of string                         |
| `%`        | Escape `%` char                          |

####Length:

| Length | Type                  |
|--------|-----------------------|
| `ll`   | `long long int` or `unsigned long long int` |
| `l`    | `long int` or `unsigned long int`     |
| `hh`   | `signed char` or `unsigned char`               |
| `h`    | `short int` or `unsigned short int`     |
| `j`    | `intmax_t` or `uintmax_t`         |
| `z`    | `size_t` or `ssize_t`         |
| `t`    | `ptrdiff_t`         |