#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

int main(void)
{
	FILE *fp;

	fp = fopen("tempfile", "r");

	if (fp == NULL){
		fprintf(stderr, "fopen():%s\n", strerror(errno));
		exit(1);
	}
	
	puts("ok!");
	exit(0);
}
