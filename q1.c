#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char pass[100];
    int i, upper = 0, digit = 0, special = 0;

    printf("Enter password: ");
    scanf("%s", pass);

    for (i = 0; i < strlen(pass); i++) {
        if (isupper(pass[i])) upper = 1;
        if (isdigit(pass[i])) digit = 1;
        if (pass[i]=='!' || pass[i]=='@' || pass[i]=='#' || pass[i]=='$' || pass[i]=='%')
            special = 1;
    }

    if (strlen(pass) >= 8 && upper && digit && special)
        printf("Strong Password");
    else
        printf("Weak Password");

    return 0;
}
