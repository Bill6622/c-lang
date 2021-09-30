#include <stdio.h>

int main(void)
{
	int len;
	int height;
	int width;

	printf("長さを入力してください： ");
	scanf("%d", &len);
	printf("高さを入力してください： ");
	scanf("%d", &height);
	printf("横幅を入力してください： ");
	scanf("%d", &width);

	printf("面積は %d です。", len * height * width);

	return 0;
}
