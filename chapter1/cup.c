#include <stdio.h>

int cup(void);
double o_to_c(int c);

int main(void)
{
	int c;
	double o;

	c = cup();
	o = o_to_c(c);

	printf("カップ数は %lf です", o);

	return 0;
}

int cup(void)
{
	int num;

	printf("オンス数を入力してください：");
	scanf("%d", &num);

	return num;
}

double o_to_c(int c)
{
	return c / 8;
}
