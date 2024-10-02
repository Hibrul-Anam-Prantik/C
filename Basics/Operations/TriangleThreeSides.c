# include <stdio.h>
# include <math.h>

int main() {
    float a, b, c;
    printf("Enter 3 sides of the triangle\n => ");
    scanf("%f %f %f", &a, &b, &c);
    float s = (a + b + c) /2;
    // Area = sqrt(s(s-a)(s-b)(s-c))
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area = %.2f\n", area);
    return 0;
}