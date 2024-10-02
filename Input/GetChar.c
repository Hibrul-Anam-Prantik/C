#include <stdio.h>

int main() {
    char ch;
    printf("Enter any Character: ");
    // scanf("%c", &ch);
    ch = getchar();
    printf("Character: %c\n", ch);

    // Clearing the input buffer
    while (getchar() != '\n');

    // getchar & putchar
    char ch1;
    printf("Enter any Character: ");
    ch1 = getchar();
    printf("Character: ");
    putchar(ch1);
    return 0;
}