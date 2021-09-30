#include <stdio.h>

int main(void)
{
	int num;

	printf("数字を入力してください：");
	scanf("%d", &num);

	if (num == 0) {
		printf("0です。");
	} else {
	       	if (num > 0) {
			printf("正の数字です。");
		} else {
			printf("負の数字です。");
		}
	}

	return 0;
}
