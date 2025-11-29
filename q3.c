#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i, vowels = 0, consonants = 0, digits = 0, spaces = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        if (c == ' ')
            spaces++;
        else if (isdigit(c))
            digits++;
        else if (isalpha(c)) {
            char ch = tolower(c);
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);

    return 0;
}
