# include <stdio.h>
# include <ctype.h>

int main() {
    char ch1, ch2;
    printf("Enter a letter: ");
    scanf("%c", &ch1);

    if(ch1 >= 'A' && ch1 <= 'Z') {
         ch2 = tolower(ch1);
    } else {
        ch2 = toupper(ch1);
    }

    printf("After Case Conversion: %c\n", ch2);
    return 0;
}