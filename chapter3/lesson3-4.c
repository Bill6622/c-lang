#include <stdio.h>

int main(void)
{
	int num;

	for (num=1; num<1000;) {
		printf("%d ", num);
		num += num;
	}

	return 0;
}
