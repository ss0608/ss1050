#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int no,ans;

    srand(time(0));

    ans=1+rand() % 100 ;

    printf("1����100�̐�������͂��Ă������� : ");
    scanf_s("%d", &no);

    while (1) 
    {

    if (no > ans)
    {
        printf("��������\n");
        printf("������x���͂��Ă�������");
        scanf_s("%d", &no);
    }

    else if (no < ans)
    {
        printf("�Ⴗ����\n");
        printf("������x���͂��Ă�������");
        scanf_s("%d", &no);
    }

    else
    {
        printf("����");
       
        break;
        
    }

   
    }

     return 0;
}