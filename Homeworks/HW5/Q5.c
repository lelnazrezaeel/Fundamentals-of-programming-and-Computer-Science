#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

int main() {
    char input[1000];
    fgets(input, sizeof(input), stdin);
    char *word = strtok(input, " \n\t.,;:!?");
    while (word != NULL) {
        int length = strlen(word);
        bool incorrect = false;
        for (int i = 0; i < length - 4; i++) {
            if (isVowel(word[i]) && isVowel(word[i + 1]) &&
                isVowel(word[i + 2]) && isVowel(word[i + 3]) &&
                isVowel(word[i + 4])) {
                incorrect = true;
                break;
            }
        }
        if (incorrect) {
            printf("%s ", word);
        }
        word = strtok(NULL, " \n\t.,;:!?");
    }
    return 0;
}
