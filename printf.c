#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

// printf("%[修饰符]格式字符", 输出表项);
int main()
{
	char ch = 65;

	printf("%d\n%c\n", ch, ch);

	// printf("[%s]: %d\", __FUNCTION__, __LINE__);
	printf("[%s]: %d\n", __FUNCTION__, __LINE__);

	sleep(5u);

	printf("Hello!\n");

	exit(0);
}
