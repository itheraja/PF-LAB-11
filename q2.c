#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    int i, pos = -1;

    printf("Enter email address: ");
    scanf("%s", email);

    // Find position of '@'
    for (i = 0; i < strlen(email); i++) {
        if (email[i] == '@') {
            pos = i;
            break;
        }
    }

    // Print domain after '@'
    if (pos != -1) {
        printf("Domain: %s\n", email + pos + 1);
    } else {
        printf("Invalid email\n");
    }

    return 0;
}
