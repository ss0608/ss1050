#include <stdio.h>

int main(void)
{
	int i;

	char moji;


	printf("�A���t�@�x�b�g�̕�������͂��Ă�������");
	scanf_s("%c", &moji);

	if ((moji >= 'A') && (moji <= 'Z'))
	{
		printf("�啶�����܂�\n");
	}
	else if ((moji >= 'a') && (moji <= 'z'))
	{
		printf("�啶�����܂܂Ȃ�\n");

	}
	else
	{
		printf("���̑��̕���\n");
	}
		
return 0;

}
