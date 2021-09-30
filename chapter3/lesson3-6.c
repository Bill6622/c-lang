#include <stdio.h>
#include<ctype.h>

int main(void)
{
	int num, answer;

	do {
		printf("リットルの数値を入力してください：");
		scanf("%d", &num);
	} while (isdigit(num));
       
	printf("%f", num * 3.7854);

	return 0;
}
