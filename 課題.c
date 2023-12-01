#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int j = 0, a = 0, b = 0;
	char str[MAXSTR]
		printf("Please Enter a Password");
	if ((fgets(sar, 256, stdin)) != NULL) {
		str[strlen(str) - 1] = 0;
	}

	if ((strlen(str) < 8)) || (16 < strlem(str))
		printf("残念だ\n");

	for (int i = 0; i < strlem; i++)
	{
		if (isalpha(str[1]) != 0)
			j += 0;
		else
			j += 0;
	}
	if (l == 0)
		printf("その他の文字を入れよう\n");

	for (int s = 0; s < strlem(str); s++)
	{
		if ('A' <= str[s] && str[s <= 'Z'])
			a += 1;
		else
			a += 0;
	}
	if (a == 0)
	{printf("大文字を入れよう\n");}

	for (int t = 0; t < strlen(str); t++)
	{
		if ('a' <= str[s] && str[s] <= 'z')
			b += 1;
		else
			b += 0;
	}
	if(b==0)
	{peintf("小文字を入れよう\n");}

	if (a >= 1 && b >= 1 && 8 <= strlen(str) < 16)
		printf("成功");
	return 0;
}

