#include <stdio.h>

int main(void)
{
	int max = 10000;

	for (int i = 1; i <= max; i++)
	{
		if (i % 121 == 0)
		{
			printf("13と17で割れる数=%d\n", i);
		}
		else if (i % 17 == 0)
		{
			printf("17で割れる数=%d\n", i);
		}
		else if (i % 13 == 0)
		{
			printf("13で割れる数=%d\n", i);
		}
	}

	return 0;
}
