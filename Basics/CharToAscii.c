# include <stdio.h>

/* 
    We will take a character as input and print the ASCII value  
*/

int main() {
    char ch;
    printf("Enter Character: ");
    scanf("%c", &ch);
    printf("ASCII Value of character \'%c\' is: %d\n", ch, ch);
    return 0;
}