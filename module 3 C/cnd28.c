// Vowel or Consonant using switch case
#include <stdio.h>
int main()
{
    char word;
    printf("Enter your character here:");
    scanf("%c",&word);
    switch(word)
    {
        case 'a':
        {
            printf("Vewel");
            break;
        }
         case 'e':
        {
            printf("Vewel");
            break;
        }
         case 'i':
        {
            printf("Vewel");
            break;
        }
         case 'o':
        {
            printf("Vewel");
            break;
        }
         case 'u':
        {
            printf("Vewel");
            break;
        }
        default :
        {
            printf("Consonant");
        }
    }
}