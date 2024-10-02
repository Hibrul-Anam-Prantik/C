# include <stdio.h>

int main() {
    printf("Enter a lowerCase letter: ");
    char ch; 
    scanf("%c", &ch);
    // way - 1
    int ascii = ch - 32;
    ch = (char) ascii;
    printf("The UpperCase Letter is: %c\n", ch);
    // way - 2
    printf("Enter a lowerCase letter: ");
    scanf(" %c", &ch);      // 1 space to consume the previous scanf's new line '\n'
    printf("The UpperCase Letter is: %c\n", ((int) ch -32));
    // way - 3
    printf("Enter a lowerCase letter: ");
    scanf(" %c", &ch);      // 1 space to consume the previous scanf's new line '\n'
    printf("The UpperCase Letter is: %c\n", (ch -32)); 
    return 0;
}