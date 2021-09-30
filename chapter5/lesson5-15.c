#include <stdio.h>
#include <string.h>

char a[][2][40] = {
	
	"0", "zero",
	"1", "one",
	"2", "two",
	"3", "three",
	"4", "four",
	"5", "five",
	"6", "six",
	"7", "seven",
	"8", "eight",
	"9", "nine",
	"", ""
};

int main(void)
{
	int i = 0;
	char num;

	printf("数字を入力してください：");
	gets(num);
	
	while(strcmp(a[i][0], "")) {
		if (!strcmp(num, a[i][0])) {
			printf("%d : %s", num, a[i][1]);
			break;
		}
	}

	return 0;
}
