#include <stdio.h>
#include <ctype.h>

#define SHIFT 3
#define MAX_LEN 1024

char decrypt_char(char c) {
    if (isupper(c)) {
        return (c - 'A' - SHIFT + 26) % 26 + 'A';
    } else if (islower(c)) {
        return (c - 'a' - SHIFT + 26) % 26 + 'a';
    } else {
        // Non-alphabetic characters are unchanged
        return c;
    }
}

int main() {
    char text[MAX_LEN];

    printf("Enter text to decrypt:\n");

    if (fgets(text, MAX_LEN, stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    for (int i = 0; text[i] != '\0'; i++) {
        text[i] = decrypt_char(text[i]);
    }

    printf("\nDecrypted text:\n%s", text);

    return 0;
}
