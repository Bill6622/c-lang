#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int a[3][3][3];
	int num, i, j, k;

	num = 1;
	for (i=0; i<3; ++i) {
		for (j=0; j<3; ++j) {
			for (k=0; k<3; ++k) {
				a[i][j][k] = num;
				printf("%d ", a[i][j][k]);
				++num;
			}
		}
	}

	return 0;
}
