#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int i, j;

	char str[80];
	char answer[80];

	printf("80文字以内の文字を入力してください：");
	gets(str);

	i = 0;
	j = strlen(str) - 1;

	while (i<=j) {
		if (i < j) {
			printf("%c%c", str[i], str[j]);
			//strcat(answer, str[i]);
			//strcat(answer, str[j]);
		} else {
			printf("%c", str[i]);
			//strcat(answer, str[i]);
		}
		++i;
		--j;
	}
	
	//printf("%s", answer);

	return 0;
}
