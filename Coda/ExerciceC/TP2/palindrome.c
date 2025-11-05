#include <stdio.h>
#include <string.h>
int palindrome(char word[])
{
    int beginning_word = 0;
    int end_word = strlen(word)-1;

    while (beginning_word != strlen(word) && end_word != 0)
    {
        if (word[beginning_word] == word[end_word])
        {
            return 0;
            printf("Palindrome");
        }

        else
        {
            return 1;
        }

        beginning_word ++;
        end_word --;
    }

return 0;

}

int main()
{
    char ask_word[20];
    printf("Enter a word : ");
    scanf("%s", ask_word);

    int result = palindrome(ask_word);
    printf("%d\n", result);

    return 0;
}