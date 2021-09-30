#include <stdio.h>

int i = 100;

int mynum(int i);

int main(void)
{

	int i, count;

	count = 0;

	for ( ; count<=100; ++count) {
		printf("%d ", mynum(count));
	}
	printf("\n");

	return 0;
}

int mynum(int count)
{
	return i - count;
}
