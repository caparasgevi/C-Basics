#include<stdio.h>
#include<string.h>

int main() {
    char word[100];
    printf("Enter a word: ");
    scanf("%s", word);

    for (int i = strlen(word) - 1; i >= 0; i--) {
        printf("%c  ", word[i]);
    }
    printf("Total number of words in the string is: %d", strlen(word));

return 0;
}
