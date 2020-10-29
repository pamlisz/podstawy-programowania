#include <stdio.h>
#include <string.h>

int main()
{
    char word[] = "abcdefgh";
    int word_lenght = strlen(word);

    char reversed_word[word_lenght+1];

    int i, j;
    for(i=(word_lenght-1), j=0; i>=0; i--, j++){
        reversed_word[j] = word[i];
    }
    reversed_word[j] = '\0';

    printf("%s", reversed_word);

    return 0;
}
