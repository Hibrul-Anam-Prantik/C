# include <stdio.h>

int main() {
    float a, b;
//  Triangle    
    printf("Base = ");
    scanf("%f", & a);
    printf("Height = ");
    scanf("%f", &b);
    float area = 0.5 * (a*b);  // triangleArea = 1/2 * (base*height)
    // or, float area = (float)1/2 * a * b;
    printf("Area of the Triangle = %.2f\n", area);
//  Suare
    area = a * a;   // area = (side)^2;
    printf("Area of the Square = %.2f\n", area);
//  rectangle
    area = a * b;   // area = length * width;
    printf("Area of the Rectangle = %.2f\n", area);   
//  circle
    printf("Radius = ");
    scanf("%f", & a); 
    float pi = 3.14;
    area = pi * a * a;   // area = pi * r^2;
    printf("Area of the Circle = %.2f\n", area);  
    return 0;
}