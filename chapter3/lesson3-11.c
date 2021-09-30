#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char ch[100];

	printf("文字を入力してください：");
	scanf("%s", ch);

	for(i=0;i<=strlen(ch);i++) {
		if(ch[i]>=97&&ch[i]<=122)
			ch[i]=ch[i]-32;
	}
	
	printf("%s\n", ch);


	return 0;
}
