#include <stdio.h>

int main(void)
{
	int i;

	char moji;


	printf("アルファベットの文字を入力してください");
	scanf_s("%c", &moji);

	if ((moji >= 'A') && (moji <= 'Z'))
	{
		printf("大文字を含む\n");
	}
	else if ((moji >= 'a') && (moji <= 'z'))
	{
		printf("大文字を含まない\n");

	}
	else
	{
		printf("その他の文字\n");
	}
		
return 0;

}
