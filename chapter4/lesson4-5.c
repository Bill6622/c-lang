#include <stdio.h>

long double soundspeed(void);

int distance;

int main(void)
{

	printf("距離を入力してください：");
	scanf("%d", &distance);
	printf("\n");

	printf("音速でいくと %Lf 秒かかる。\n", soundspeed());

	return 0;
}

long double soundspeed(void)
{
	long double time;

	time = (distance / 0.3) / 1129;

	return time;
}


