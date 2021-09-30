#include <stdio.h>
#include <conio.h>

int main(void)
{
	char ch;

	do{
		printf("文字を入力してください：");
		ch = getche();
		printf("\n");

		switch(ch) {
			case "\b":
				"バックスペースを入力しました。";
				break;
			case "\t":
				"タブを入力しました。";
				break;
			case "\n":
				"センターを押しました。";
				break;
		}
	} while(ch != 'q');

	return 0;
}
