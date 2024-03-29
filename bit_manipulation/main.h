#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>


int set_bit(unsigned long int *n, unsigned int index);

unsigned int binary_to_uint(const char *b);

int clear_bit(unsigned long int *n, unsigned int index);

unsigned int flip_bits(unsigned long int n, unsigned long int m);

void print_binary(unsigned long int n);

int get_bit(unsigned long int n, unsigned int index);

int _putchar(char c);

char *_strdup(const char *str);

#endif
