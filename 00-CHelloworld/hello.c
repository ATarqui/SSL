#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Hubo un error con el archivo");
        return 1;
    }

    fprintf(file, "Hello, World!\n");
    fclose(file);

    printf("Hello, World!\n");

    return 0;
}


