#ifndef MAIN_H
#define MAIN_H
/**
 * _strcat - function name
 * @dest: destination
 * @src: source string to be merged with dest
 * Return: pointer to dest chracter
 */
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);
int _putchar(char c);
void add_remaining_values_from_both_string(char *str, int *i, int *j, int *carry, int *res, int *rem, char *r, int *k);
void add_remaining_carry(int *carry, char *r, int *k);
void add_numbers(char *n1, char *n2, int *i, int *j, int *carry, int *res, int *rem, char *r, int *k);
void rearrange_digits(char *r, int *k, int *size_r);
#endif
