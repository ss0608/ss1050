#include<stdio.h>

int powint(int x, int p);

int main(void)
{
	int i;
	for (i = 0; i <= 10; i++)
	{
		printf("%d\t%d\n", i, powint(2,i));

	}

	return 0;
}