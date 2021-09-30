#include <stdio.h>

long double soundspeed(int distance);

int main(void)
{
	int distance;

	printf("距離を入力してください：");
	scanf("%d", &distance);
	printf("\n");

	printf("音速でいくと %Lf 秒かかる。\n", soundspeed(distance));

	return 0;
}

long double soundspeed(int distance)
{
	long double time;

	time = (distance / 0.3) / 1129;

	return time;
}
