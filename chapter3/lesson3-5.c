#include <stdio.h>

int main(void)
{
	int distance, speed, num, i;

	printf("計算する回数を入力してください：");
	scanf("%d", &num);

	i = 1;
	while (i <= num) {
		printf("距離を入力してください(km)：");
		scanf("%d", &distance);
		printf("平均速度を入力してください：");
		scanf("%d", &speed);

		printf("所有時間は %d 時間です。\n", distance / speed);

		++i;
	}

	return 0;
}
