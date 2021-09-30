#include <stdio.h>

int exchange(void);

int main(void)
{
	float result;

	result = exchange();
	printf("英ポンドは %f です", result);

	return 0;
}

int exchange(void)
{
	int doller;

	printf("ドルを入力してください:");
	scanf("%d", &doller);

	return doller / 2;
}
