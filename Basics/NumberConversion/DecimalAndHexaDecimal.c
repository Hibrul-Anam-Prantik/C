# include <stdio.h>

int main() {
    int num;
    printf("Decimal Number = ");
    scanf("%d", &num);
    printf("Hexa-Decimal Number = %x\n", num);
    printf("Hexa-Decimal Number = ");
    scanf("%x", &num);
    printf("Decimal Number = %d\n", num);
    return 0;
}