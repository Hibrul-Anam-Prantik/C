#include <stdio.h>

int main() {
    int n1, n2, sum;
    // scanf("%d %d", &n1, &n2);
    printf("Enter a Number: "); 
    scanf("%d", &n1);
    printf("Enter another Number: ");
    scanf("%d", &n2);
    sum = n1 + n2;
    printf("Summation: %d", sum);
}