#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You have entered %d\n", num);
    
    printf("Enter a character: ");
    char ch;
    scanf(" %c", &ch);   // 1 space to consume the previous scanf's new line
    printf("You have entered %c\n", ch);

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You have entered %d\n", num);
    return 0;
}