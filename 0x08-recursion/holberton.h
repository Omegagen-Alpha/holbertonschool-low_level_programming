#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>

int _putchar(char c);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void puts2(char *str);
void rev_string(char *s);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
void puts_half(char *str);
char *_strcat(char *dest, char *src);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
#endif /* HOLBERTON_H */
