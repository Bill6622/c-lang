#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char answer[20] = "concatenation";
	char str[20] = "-------------";
	char ch;
	int i, j, num;

	printf("今からハングマンを始める。15回まで入力可能だ！\n準備はいいか？\nいくぞ！\n");
	for (i=1; i<=15; ++i) {
		printf("%s\n", str);
		printf("文字を入力しろ：");
		//scanf("%s", &ch);
		ch = getche();
		printf("\n");

		switch(ch) {
			case 'c':
				printf("その文字は含まるぞ。");
				str[0] = 'c';
				str[3] = 'c';
				break;
			case 'o':
				printf("その文字は含まるぞ。");
				str[1] = 'o';
				str[11] = 'o';
				break;
			case 'n':
				printf("その文字は含まるぞ。");
				str[2] = 'n';
				str[7] = 'n';
				str[12] = 'n';
				break;
			case 'a':
				printf("その文字は含まるぞ。");
				str[4] = 'a';
				str[8] = 'a';
				break;
			case 't':
				printf("その文字は含まるぞ。");
				str[5] = 't';
				str[9] = 't';
				break;
			case 'e':
				printf("その文字は含まるぞ。");
				str[6] = 'e';
				break;
			case 'i':
				printf("その文字は含まるぞ。");
				str[10] =  'i';
				break;
			default:
				printf("その文字は含まれないぞ。");
				break;
		}


		if (strcmp(str, answer) == 0) {
			break;
		}
		
		printf("残りの入力回数は %d だ。\n", 15-i);
	}

	printf("\n");
	if (strcmp(str, "concatenation") == 0) printf("Awsome!!正解だ！答えは %s だ！！おめでとう！\n", answer);
	else printf("不正解だ。一から出直せ。\n");

	return 0;
}

int getche(void)
{
	struct termios oldattr, newattr;
	int ch;
	tcgetattr( STDIN_FILENO, &oldattr );
	newattr = oldattr;
	newattr.c_lflag &= ~( ICANON );
	tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
	ch = getchar();
	tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
	return ch;
}
