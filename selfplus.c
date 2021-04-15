#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i = 1, j = 10, value;

	value = i++ + ++j;
	printf("i = %d, j = %d, value = %d\n", i, j, value);

	i += j+3;
	printf("i = %d\n", i);

	exit(0);
}
