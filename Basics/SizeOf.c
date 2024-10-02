# include <stdio.h>

int main() {
    int i;
    float f;
    double d;
    char c;
    printf("Size of Integer  : %d bytes\n", sizeof(i));
    printf("Size of Float    : %d bytes\n", sizeof(f));
    printf("Size of Double   : %d bytes\n", sizeof(d));
    printf("Size of Character: %d byte", sizeof(c));
}