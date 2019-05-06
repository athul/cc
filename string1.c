#include <stdio.h>
#include <string.h>
void main()
{
    char word[100];
    int i, len, vow = 0, con = 0, pun = 0;
    printf("Enter the String:\n");
    gets(word);
    puts(word);
    len = strlen(word);
    printf("%d",len);
    for (i = 0; i < len; i++)
    {
        if ((word[i] == 'a' )|| (word[i] == 'e')|| (word[i] == 'i') || (word[i] == 'o') || (word[i] == 'u') || (word[i] =='A') ||( word[i] == 'E') ||( word[i] == 'I') ||( word[i] == 'O' )||( word[i] == 'U'))
            vow++;
        else if (word[i] == '.' || word[i] == ',')
            pun++;
        else
            con++;
    }
    printf("\nThe number of vowels,consonants and punctuation marks are \t%d\t%d\t%d resp\n", vow, con, pun);
}
