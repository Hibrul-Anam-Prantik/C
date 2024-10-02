# include <stdio.h>

int main() {
    int num;
    printf("Octal Number = ");
    scanf("%o", &num);
    printf("Hexa-Decimal Number = %x\n", num);
    printf("Hexa-Decimal Number = ");
    scanf("%x", &num);
    printf("Octal Number = %o\n", num);
    return 0;
}