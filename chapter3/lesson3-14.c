#include <stdio.h>

int main(void)
{
	int i;

	i = 1;
	while(i<=10) {
		printf("%d", i);
		++i;
	}
	printf("\n");

	for (i=1; i<=10; ++i) printf("%d", i);
	printf("\n");

	i = 1;
	do {
		printf("%d", i);
		++i;
	} while(i<=10);
	printf("\n");

	return 0;
}
