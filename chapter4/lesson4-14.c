#include <stdio.h>
#include <math.h>

int main(void)
{
	double i;

	for (i = 1.0; (int)i<100.0; i+=0.1) {
		printf("%lf\n", i);
	}

	return 0;
}
