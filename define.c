#include<stdio.h>
#include<stdlib.h>

#define pi       3.1415926
#define ADD      2+3
// #define MAX(a,b) (a > b ? a : b)
#define MAX(a,b) \
        ({typeof(a) A=a, B=b; ((A)>(B) ? (A):(B));})

#if 0
int max(int a, int b)
{
	return a>b?a:b;
}
#endif
int main()
{
	double radius;
	int a, b;

	printf("Input the radius of the circle: ");
	scanf("%lf", &radius);

	printf("The area of the circle: %.2f\n", radius*radius*pi);
	printf("The error: %d\n", ADD*ADD);

	printf("Input two numbers: ");
	scanf("%d%d", &a, &b);

	printf("The max number: %d\n", MAX(a,b));
	printf("The max number: %d\n", MAX(a++,b++));

	exit(0);
}
