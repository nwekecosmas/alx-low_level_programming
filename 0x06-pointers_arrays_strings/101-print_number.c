#include "main.h"

/**
* print_number - prints an integer;
* @n: integer to be printed;
*/

void print_number(int n)
{
unsigned int tens, dig, pos = n;
double temp_tens = 1;

if(n == 0)
_putchar('0');
else
{
if (n < 0)
{
pos = n * -1;
_putchar('-');
}
while (temp_tens <= pos)
temp_tens *= 10;
tens = temp_tens /10;
while (tens >= 1)
{
dig = pos /tens;
_putchar(dig + '0');
pos = (pos - (tens * dig ));
tens /= 10;
}
}
}

/*
_putchar('-');
} else
{
n1 = n;
}
if (n1 / 10)
print_number(n1 / 10);
_putchar((n1 % 10) + '0');
}
*/
