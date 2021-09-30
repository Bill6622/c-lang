#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char bigstr[30], str[30];

	for ( ; ; ) {
		printf("文字を入力してください：");
		gets(str);

		if (strcmp(str, "quit") == 0) {
			printf("終了します。");
			break;
		}
		if (strlen(str) >= 30) {
			printf("文字数を超えたため終了します。");
			break;
		} else {
			strcat(bigstr, str);
			strcat(bigstr, "\n");

			if (strlen(bigstr) >= 30) {
				printf("文字数を超えたため終了します。");
				break;
			} else {
				printf("%s", bigstr);
			}
		}
	}
	printf("\n");

	return 0;
}

