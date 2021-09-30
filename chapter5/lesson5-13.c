#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int a[10][3];
	int x, y;

	for (x=0; x<11; ++x) {
		for (y=0; y<3; ++y) {
				a[x][y] = a[x][0];
				printf("%d ", a[x][y]);
		}
		printf("\n");
	}

	return 0;
}
