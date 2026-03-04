#include <stdio.h>

int main() {
    // \a will trigger the macOS system alert sound or a screen flash
    printf("\aAlert!!!\n");
    
    // \t aligns the colon for a cleaner "chat" look
    printf("Prantik :\tMy name is \"Prantik.\" What\'s yours\?\n");
    printf("Stranger:\tI'm Stranger. Thx, Bai.\n");

    return 0;
}