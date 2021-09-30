#include <stdio.h>

int main(void)
{
	int distance, speed num, i;

	printf("計算する回数を入力してください：");
	scanf("%d", &num);

	for (i=1; i<=num; ++i) {
		printf("距離を入力してください(km)：");
		scanf("%d", &distance);
		printf("平均速度をにゅうりょくしてください：");
		scanf("%d", &speed);

		printf("所有時間は %d 時間です。", distance / speed);
	}

	return 0;
}
