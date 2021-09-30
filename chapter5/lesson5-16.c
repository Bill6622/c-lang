#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char a[2][2][2][10] = {
	{
		"one", "1",
		"two", "2"
	},
	{
		"one", "いち",
		"two", "にい"
	}

};
	
int main(void)
{
	int num, i;
	char str[10];

	printf("どちらの辞書を使うか入力してください。0: English->Number, 1: English->Japanese :");
	scanf("%d", &num);

	printf("英語を入力してください。 one or two :");
	scanf("%s", &str);

	for (i=0; i<2; ++i) {
		if (strcmp(a[num][i][0], str) == 0) {
			printf("%s\n", a[num][i][1]);
		}
	}

	return 0;
}
