#include <stdio.h>

int main() {
    // for integers
    int n1 = 5, n2 = 10;
    int n3, n4;
    n3 = 12, n4 = 15;
    int n5 = 20;
    printf("Numbers   : %d, %d, %d, %d & %d\n", n1, n2, n3, n4, n5);

    // for chacarters, floats & doubles
    char ch = '@'; 
    float nf = 4.56;
    double nd = 6.696969696;
    printf("Charachter: \'%c\',\nFloat     : %f &\nDouble    : %lf\n", ch, nf, nd);
    printf("Float : %.1f\n", nf);  // manipulation digits after "."(point)
    printf("Double: %.2lf\n", nd); 
    return 0;
}