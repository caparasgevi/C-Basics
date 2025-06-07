#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {
    char word[50];
    printf("Enter any word: ");
    scanf("%s", word);
    int length = strlen(word);
    int i = -1;
    while (i <= length) {
        i += 2;
        printf("%c\n", word[i]);
    }

getchar();
return 0;
}
