#include <stdio.h>

int main(void)
{
	//char content1, content2, content3;
	int num;

	char * content1 = "努力は報われる。もし報われない努力があるとしたそれはまだ努力とは言えない。\n";
	char * content2 = "諦めたらそこで試合終了ですよ。\n";
	char * content3 = "A winner never quit.";

	printf("1から3の番号を入力してください：");
	scanf("%d", &num);

	if (num == 1) {
		printf("%s", content1);
	} else if (num == 2) {
		printf("%s", content2);
	} else {
		printf("%s", content2);
	}

	return 0;
}
