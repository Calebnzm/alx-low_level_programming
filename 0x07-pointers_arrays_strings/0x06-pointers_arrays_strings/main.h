#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

void print_buffer(char *b, int size);
char *cap_string(char *str);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
int _putchar(char c);
void print_number(int n);
char *rot13(char *s);
char *leet(char *str);
void reverse_array(int *a, int n);
int _strlen(char *s);
char *string_toupper(char *str);
char *_strcpy(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);

#endif /* MAIN_H */
