#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int i, j, k, l;
	char sentence[80];

	printf("文字を入力してください：");
	gets(sentence);

	j = 0;
	k = 0;
	l = 0;

	for (i=0; i<strlen(sentence); ++i) {
		switch(sentence[i]) {
			case ' ':
				++j;
				break;
			case ',':
				++k;
				break;
			case '.':
				++l;
				break;
		}
	}

	printf("スペース：%d, カンマ：%d, コンマ：%d\n", j, k, l);

	return 0;
}
