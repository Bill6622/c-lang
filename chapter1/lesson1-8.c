#include <stdio.h>

void func1(void);

int main(void)
{
	func1();

	return 0;
}

void func1(void)
{
	printf("これは表示される");
	return;
}
