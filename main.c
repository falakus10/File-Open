#include <stdio.h>

int main() {
    FILE *file;
    char character;

    file = fopen("programming.txt", "r");
    if (file == NULL) {
        printf("File could not be read/created.\n");
        return 1;
    }

    // Read and print characters one by one
    printf("Contents of the file (using the first method):\n");
    for (character = fgetc(file); character != EOF; character = fgetc(file)) {
        printf("%c", character);
    }

    // Reset the file position indicator to the beginning
    fseek(file, 0, SEEK_SET);

    // Read and print characters one by one using a while loop
    printf("\n\nContents of the file (using rewind and while loop):\n");
    while ((character = fgetc(file)) != EOF) {
        printf("%c", character);
    }

    fclose(file);

    return 0;
}
