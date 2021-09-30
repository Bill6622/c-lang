#include <stdio.h>

int main(void)
{
	int i;
	char ch, p;

	printf("文字を入力してください：");
	scanf("%s", &ch);

	for (i=1; i<=ch; ++i) {
		printf(".");
	}
	//printf("%c", ch * .);

	printf("\n");

	return 0;
}
