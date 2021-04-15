#include<stdio.h>
#include<stdlib.h>

int i = 100;
int k = 0;

void testfunc(void)
{
	static int x = 0;

	x = x + 1;

	printf("%p->%d\n",&x, x);
}

void print_star(void)
{
	for (k=0; k<5; k++)
		printf("*");
	printf("\n");
	printf("[%s]k = %d\n", __FUNCTION__, k);
}

int main(void)
{
	auto int i = 3;
    static int j;

	printf("i = %d\n", i);
	printf("j = %d\n", j);

	testfunc();
	testfunc();
	testfunc();

	{
		int i = 1;
		printf("i = %d\n", i);
	}

	for (k=0; k<5; k++)
		print_star();
	printf("[%s]k = %d\n", __FUNCTION__, k);
	exit(0);
}
