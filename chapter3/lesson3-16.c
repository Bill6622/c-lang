#include <stdio.h>

int main(void)
{
	int i, j, k;

	for(k=0; k<10; ++k) {
		printf("最初の文字を入力してください：");
		scanf("%d", &i);

		printf("2番目の数字を入力してください：");
		scanf("%d", &j);

		if (j == 0) {
			printf("0では除算はできません。\n");
		} else {
			printf("%d\n", i / j);
		}
	}
	
	return 0;
}
		
