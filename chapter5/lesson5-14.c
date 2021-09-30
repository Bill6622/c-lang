#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int a[][3] = {
		1, 1, 1,
		2, 4, 8,
		3, 9, 27,
		4, 16, 64,
		5, 25, 125,
		6, 36, 216,
		7, 49, 343,
		8, 64, 512,
		9, 81, 729,
		10, 100, 1000
	};

	int num;

	printf("1から10の数字を入力してください：");
	scanf("%d", &num);

	printf("%d %d", a[num-1][1], a[num-1][2]);

	return 0;
}
