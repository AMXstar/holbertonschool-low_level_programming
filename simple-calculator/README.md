# Simple Calculator

A terminal-based interactive calculator written in C.

## Compilation

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

## Running

./calculator

## Supported Operations

1. Addition: A + B
2. Subtraction: A - B
3. Multiplication: A * B
4. Division: A / B
0. Exit

## Numeric Behavior

The calculator uses double-precision floating-point numbers.
Menu choices are integers.
Results are displayed with up to 15 significant digits.

## Input Validation

The calculator rejects menu numbers outside the range 0 to 4.
Division by zero prints an error message.
Non-numeric input handling is not fully supported.

## Known Limitations

Floating-point arithmetic may introduce rounding errors.
