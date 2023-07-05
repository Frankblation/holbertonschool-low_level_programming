#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>


void print_name(char *name, void (*f)(char *));

int int_index(int *array, int size, int (*cmp)(int));

void array_iterator(int *array, size_t size, void (*action)(int));

int _putchar(char c);

#endif