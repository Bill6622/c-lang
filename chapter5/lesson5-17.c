#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int i, num;
	char str[80];

	printf("80文字以内の文字を入力してください：");
	gets(str);

	num = 80 - strlen(str);
	for (i=0; i < num; ++i) strcat(str, ".");

	printf("%s", str);

	return 0;
}
