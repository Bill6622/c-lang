#include <stdio.h>

int main(void)
{
	int a,b;
	char ch;

	printf("実行したい演算は：\n");
	printf("加算（A)、演算（S)、乗算（M)、除算（D)のどれですか？\n");

	do {
		printf("最初のアルファベット文字を入力してください：");
		ch = getchar();
	} while (ch != 'A' && ch != 'S' && ch != 'M' && ch != 'D');
	printf("\n");

	printf("最初の数字を入力してください：");
	scanf("%d", &a);
	printf("2番目の数字を入力してください：");
	scanf("%d", &b);

	if (ch == 'A') printf("%d", a + b);
	else if (ch == 'S') printf("%d", a - b);
	else if (ch == 'M') printf("%d", a * b);
	else if (ch == 'D' && b != 0) printf("%d", a / b);

	return 0;
}
