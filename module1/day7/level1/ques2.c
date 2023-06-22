//copy a file by considering the user option to handle the text case

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


void convertToUpper(char* str) {
    for (int i = 0; i < strlen(str); i++) {
        str[i] = toupper(str[i]);
    }
}


void convertToLower(char* str) {
    for (int i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);
    }
}


void convertToSentenceCase(char* str) {
    int length = strlen(str);
    str[0] = toupper(str[0]);
    for (int i = 1; i < length; i++) {
        if (str[i] == '.' || str[i] == '?' || str[i] == '!') {
            i++;
            while (i < length && str[i] == ' ') {
                i++;
            }
            if (i < length) {
                str[i] = toupper(str[i]);
            }
        } else {
            str[i] = tolower(str[i]);
        }
    }
}


void copyFileWithCase(FILE* sourceFile, FILE* destinationFile, char* option) {
    char line[1000];

    while (fgets(line, sizeof(line), sourceFile) != NULL) {
        if (strcmp(option, "-u") == 0) {
            convertToUpper(line);
        } else if (strcmp(option, "-l") == 0) {
            convertToLower(line);
        } else if (strcmp(option, "-s") == 0) {
            convertToSentenceCase(line);
        }

        fputs(line, destinationFile);
    }
}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Insufficient arguments.\n");
        printf("Usage: ./cp <option> <source_file> <destination_file>\n");
        printf("Options:\n");
        printf("-u\tChange file content to upper case\n");
        printf("-l\tChange file content to lower case\n");
        printf("-s\tChange file content to sentence case\n");
        return 1;
    }

    char* option = argv[1];
    char* sourcePath = argv[2];
    char* destinationPath = argv[3];

    FILE* sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Unable to open the source file.\n");
        return 1;
    }

    FILE* destinationFile = fopen(destinationPath, "w");
    if (destinationFile == NULL) {
        printf("Unable to create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    copyFileWithCase(sourceFile, destinationFile, option);

    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully with text case handling.\n");

    return 0;
}
