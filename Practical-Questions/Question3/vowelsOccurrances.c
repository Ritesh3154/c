#include <stdio.h>
#include <ctype.h>

void countVowels(char str[]) {
    int a=0, e=0, i=0, o=0, u=0;
    for (int j = 0; str[j] != '\0'; j++) {
        char ch = tolower(str[j]);
        if (ch == 'a') a++;
        else if (ch == 'e') e++;
        else if (ch == 'i') i++;
        else if (ch == 'o') o++;
        else if (ch == 'u') u++;
    }
    printf("Vowel counts:\nA=%d E=%d I=%d O=%d U=%d\n", a, e, i, o, u);
}

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    countVowels(sentence);
    return 0;
}
