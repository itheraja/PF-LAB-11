#include <stdio.h>

int main() {
    char msg[200];
    int i;

    printf("Enter message: ");
    fgets(msg, sizeof(msg), stdin);

    for (i = 0; msg[i] != '\0'; i++) {
        char c = msg[i];

        if (c >= 'a' && c <= 'z') {           
            c = ((c - 'a' + 3) % 26) + 'a';
        }
        else if (c >= 'A' && c <= 'Z') {      
            c = ((c - 'A' + 3) % 26) + 'A';
        }

        msg[i] = c;
    }

    printf("Encrypted message: %s", msg);

    return 0;
}
