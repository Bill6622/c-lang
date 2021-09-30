#include <stdio.h>

int main(void)
{
	unsigned short int loc_counter;

	int distance;
	long double time;

	printf("距離を入力してください：");
	scanf("%d", &distance);

	time = (distance * 1.6) / 186000;
	printf("光の速さだと %Lf 秒かかります。\n", time);

	return 0;
}

