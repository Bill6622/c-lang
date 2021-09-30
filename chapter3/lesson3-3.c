#include <stdio.h>

int main(void)
{
	int num;

	printf("数字を入力してください：");
	scanf("%d", &num);

	for ( ; ; ) {
		//printf("%d", num);
		if (0 == num--) {
			break;
		}
	}
	printf("\a");


	return 0;
}
