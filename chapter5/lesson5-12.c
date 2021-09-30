#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[20] = "Tom";

	strcpy(name, "Tom Brazwell");

	printf("%s", name);

	return 0;
}
