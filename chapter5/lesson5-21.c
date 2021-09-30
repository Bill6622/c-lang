#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char str[1];
	gets(str);
	if (strcmp(str, "c") == 0) printf("OK");
	else printf("NO");

	return 0;
}


