# include <stdio.h>

int main() {
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;   // summation
    printf("Summation: %d\n", sum);
    float avg = (float)(a + b)/2;   // average
    printf("Average: %.2f\n", avg);
    return 0;
}