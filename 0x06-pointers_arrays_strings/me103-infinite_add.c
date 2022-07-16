#include "main.h"
/**
 * infinite_add - function name
 * @n1: first number character
 * @n2: second number character
 * @r: result buffer
 * @size_r: size designated for r
 * Return: pointer to char r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = j = carry = res = rem = base_k = 0;
	int k = size_r - 1;

	while (n1[i] != 0)
		i++;
	while (n2[j] != 0)
		j++;
	if (i >= size_r || j >= size_r)
		return (0);
	i--;
	j--;
	while (i >= 0 && j >= 0)
	{
		add_numbers(n1, n2, &i, &j, &carry, &res, &rem, r, &k);
	}
	add_remaining_values_from_both_string(n1, &i, &j, &carry, &res, &rem, r, &k);
	add_remaining_carry(&carry, r, &k);
	if (k < 0)
		return (0);
	rearrange_digits(r, &k, &size_r);
	return (r);
}
/**
 * add_remaining_values_from_both_string - function name
 * @str: string
 * @i: pointer to i
 * @j: pointer to j
 * @carry: remainder to be carried
 * @res: result
 * @rem: remainder
 * @r: buffer for result
 * @k: keeps track of size of size_r occupied by res
 */
void add_remaining_values_from_both_string (char *str, int *i, int *j, int *carry, int *res, int *rem, char *r, int *k)
{
	while (*i > *j)
	{
		*res = str[*i] - '0' + *carry;
		*rem = *res % 10;
		if (*rem == *res)
			*carry = 0;
		else
			*carry = 1;
		r[*k] = *rem + '0';
		*i = *i - 1;
		*k = *k - 1;
	}
	while (*j > *i)
	{
		*res = str[*j] - '0' + *carry;
		*rem = *res % 10;
		if (*rem == *res)
			*carry = 0;
		else
			*carry = 1;
		r[*k] = *rem + '0';
		*j = *j - 1;
		*k = *k - 1;
	}
}
/**
 * add_remaining_carry - function name
 * @carry: carry
 * @r: resut
 * @k: start index of r
 */
void add_remaining_carry(int *carry, char *r, int *k)
{
	if (*carry > 0)
	{
		r[*k] = *carry + '0';
		*k-=1;
	}
}
/*
 * add_numbers - function name
 * @n1: first
 * @n2: second
 * @i: looper1
 * @j: looper2
 * @carry: carry
 * @res: result from adding n1 and n2
 * @rem: remainder
 * @r: space provided for result
 * @k: start index of my res
 */
void add_numbers(char *n1, char *n2, int *i, int *j, int *carry, int *res, int *rem, char *r, int *k)
{
	*res = n1[*i] - '0' + n2[*j] - '0' + *carry;
	*rem = *res % 10;
	if (*rem == *res)
		*carry = 0;
	else
		*carry = 1;
	r[*k] = *rem + '0';
	*i -= 1;
	*j -= 1;
	*k -= 1;
}
/**
 * rearrange_digits - function name
 * @r: result
 * @k: start index of res
 * @size_r: size provided for r to stay in
 */
void rearrange_digits(char *r, int *k, int *size_r)
{
	*k += 1;
	int base_k = *k;
	if (*k > 0)
	{
		while (*k < *size_r)
		{
			r[*k - base_k] = r[*k];
			r[*k] = '\0';
			*k+=1;
		}
	}
}
