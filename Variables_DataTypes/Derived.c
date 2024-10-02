#include <stdio.h>


struct Student {
    char name[5];  // Anam
    int id;
};

int main() {
//  Arrays    
    // int numbers[5] = {2,3,4,5,6};
    int numbers[] = {1,2,3,4,5};
    printf("%d\n", numbers[3]);
    int arr[50];
    arr[0] = 5; arr[1] = 15; arr[2] = 25; arr[3] = 35;
    printf("%d\n", arr[2]);
    char letters[] = {'a','b', 'c', 'd'};
    printf("%c\n", letters[2]);
//  struct
    
    struct Student s1;
    snprintf(s1.name, sizeof(s1.name), "Anam");
    s1.id = 24101230;
    printf("Name: %s\n", s1.name);
    printf("ID  : %d\n", s1.id);
    return 0;

//  unions, pointers, enum   
}

