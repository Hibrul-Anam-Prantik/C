# include <stdio.h>

/* 
    We will take an integer input(ASCII value) and print the character 
*/

int main() {
    int ascii;
    printf("Enter an Ascii value: ");
    scanf("%d", &ascii);
    printf("ASCII Character: %c\n", ascii);
    return 0;
}