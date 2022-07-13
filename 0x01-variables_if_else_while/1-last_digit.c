#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */

int main(void)

{

int n, last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
while (n > 10)
{
	n %=10;
	n /=10;
}
last_digit = n;

if (last_digit > 5) 
printf("%i and is greater than 5\n", n);
else if (last_digit == 0)
printf("%i and is 0\n", n);
else if (last_digit < 6 && last_digit != 0)
printf("%i and is less than 6 and not 0\n", n);
return (0);

}
