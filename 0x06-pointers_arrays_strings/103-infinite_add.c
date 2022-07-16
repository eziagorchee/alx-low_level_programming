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
	int i = 0;
	int j = 0;
	int k = size_r - 1;
	int carry = 0;
	int res;
	int rem;
	int base_k;

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
		res = n1[i] - '0' + n2[j] - '0' + carry;
		rem = res % 10;
		if (rem == res)
			carry = 0;
		else
			carry = 1;
		r[k] = rem + '0';
		i--;
		j--;
		k--;
	}
	while (i > j)
	{
		res = n1[i] - '0' + carry;
		rem = res % 10;
		if (rem == res)
			carry = 0;
		else
			carry = 1;
		r[k] = rem + '0';
		i--;
		k--;
	}
	while (j > i)
	{
		res = n2[j] - '0' + carry;
		rem = res % 10;
		if (rem == res)
			carry = 0;
		else
			carry = 1;
		r[k] = rem + '0';
		j--;
		k--;
	}
	if (carry > 0)
	{
		r[k] = carry + '0';
		k--;
	}
	if (k < 0)
		return (0);
	i++;
	j++;
	k++;
	if (k > 0)
	{
		base_k = k;
		while (k < size_r)
		{
			r[k - base_k] = r[k];
			r[k] = '\0';
			k++;
		}
	}
	return (r);
}

