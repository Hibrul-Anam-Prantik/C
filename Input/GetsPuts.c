# include <stdio.h>
# include <string.h>

int main() {
    char name[50];   // string
    printf("Enter your name: ");
    // scanf("%s", &name);  
    // gets(name);  
    // gets is unsafe     
    // printf("Hello, %s\n", name); 
    // fgets -safe
    fgets(name, sizeof(name), stdin);  
    // "ENTER" is also considered as a characted

    // to avoid taking ENTER in our input, we can use the technique below-
    size_t len = strlen(name);
    if(name[len -1] == '\n') {
        name[len - 1] = '\0';
    }

    printf("Hello, ");
    puts(name);

    return 0;
}