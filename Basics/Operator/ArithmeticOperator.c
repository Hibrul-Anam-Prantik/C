# include <stdio.h>

int main() {
    int a, b, sum, sub, mul, div, mod; 
    // add
    a = 2, b = 3;
    sum = a + b;
    printf("Summation     : %d\n", sum);
    // minus
    a = 2, b = 3;
    sub = a - b;
    printf("Subtraction   : %d\n", sub);
    // multiply
    a = 2, b = 3;
    mul = a * b;
    printf("Multiplication: %d\n", mul);
    // division
    a = 5, b = 2;
    div = a / b;
    float divi = a*1.0 / b;   // to get the exact value
    printf("Division      : %d\n", div);
    printf("Division      : %.2f\n", divi);
    // modulus
    a = 5, b = 2;
    mod = a % b;
    printf("Modulus       : %d\n", mod);

/*     x = 4/2 + 8*4 - (5+2) % 3 
    => x = 2 + 32 - 7%3 
    => x = 34 - 1;
    => x = 33;
*/
double x = 4/2 + 8*4 - (5+2)%3;
    printf("x = %.2lf\n", x);
    return 0;
}