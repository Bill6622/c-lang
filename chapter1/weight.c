#include <stdio.h>

double weight(void);

int main(void)
{
	double w;
	w = weight();
	printf("月での体重は %lf", w * 0.17);

	return 0;
}

double weight(void)
{
	double num;
	printf("体重を入力してください：");
	scanf("%lf", &num);
	return num;
}
