# include <stdio.h>

int main() {
    int n1 = 10;
    int n2 = 5;
    printf("Before Swapping, \n n1 = %d\n n2 = %d\n", n1, n2);

    // swap with temp variable
    int temp = n1;
    n1 = n2;
    n2 = temp;
    printf("After Swapping \n n1 = %d\n n2 = %d\n", n1, n2);
    n1 = 10, n2 = 3;
    printf("Before Swapping, \n n1 = %d\n n2 = %d\n", n1, n2);

    // swap without temp variable
    n1 = n1 - n2;  // 7
    n2 = n1 + n2;  // 10
    n1 = n2 - n1;  // 3
    printf("Before Swapping, \n n1 = %d\n n2 = %d\n", n1, n2);
    return 0;

}
