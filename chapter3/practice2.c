#include<stdio.h>
#include<string.h>

int main(void){

	int i;

	/* 文字列 */
	char str[100];

	/* 英数字を入力 */
	printf("文字列（英数字）を入力 = ");
	scanf("%s", str);

	/* アルファベットの小文字を大文字に変換 */
	for(i=0;i<=strlen(str);i++){
		/* アルファベットの小文字なら変換 */
		//if(str[i]>=97&&str[i]<=122)
		if(str[i]>='a'&&str[i]<='z')
			//str[i]=str[i]-32;
			str[i]=str[i]-('a'-'A');
	}
	/* 変換した文字列を出力 */
	printf("変換した文字列 = %s\n", str);

	return 0;
}

