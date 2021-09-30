#include <stdio.h>

int main(void)
{
	float num1;
	float num2;

	printf("浮動小数点数を入力してください： ");
	scanf("%f", &num1);

	printf("浮動小数点数を入力してください： ");
	scanf("%f", &num2);

	printf("%f", num1 + num2);

	return 0;
}
