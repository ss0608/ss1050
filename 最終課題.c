#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int no,ans;

    srand(time(0));

    ans=1+rand() % 100 ;

    printf("1から100の整数を入力してください : ");
    scanf_s("%d", &no);

    while (1) 
    {

    if (no > ans)
    {
        printf("高すぎる\n");
        printf("もう一度入力してください");
        scanf_s("%d", &no);
    }

    else if (no < ans)
    {
        printf("低すぎる\n");
        printf("もう一度入力してください");
        scanf_s("%d", &no);
    }

    else
    {
        printf("正解");
       
        break;
        
    }

   
    }

     return 0;
}