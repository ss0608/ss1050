#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int no,ans;

    srand(time(0));

    ans=1+rand() % 100 ;

    printf("1‚©‚ç100‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ : ");
    scanf_s("%d", &no);

    while (1) 
    {

    if (no > ans)
    {
        printf("‚‚·‚¬‚é\n");
        printf("‚à‚¤ˆê“x“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
        scanf_s("%d", &no);
    }

    else if (no < ans)
    {
        printf("’á‚·‚¬‚é\n");
        printf("‚à‚¤ˆê“x“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
        scanf_s("%d", &no);
    }

    else
    {
        printf("³‰ğ");
       
        break;
        
    }

   
    }

     return 0;
}