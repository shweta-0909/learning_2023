// copy a file using file operations

#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourcePath[100], destinationPath[100];
    char ch;

    printf("Enter the path of the source file: ");
    scanf("%s", sourcePath);

    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Unable to open the source file.\n");
        return 1;
    }

    printf("Enter the path of the destination file: ");
    scanf("%s", destinationPath);


    destinationFile = fopen(destinationPath, "w");
    if (destinationFile == NULL) {
        printf("Unable to create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");

    return 0;
}
