//Binary/Octal/Hex to Decimal Conversion

#include <stdio.h>
#include <math.h>
#include <string.h>

int binaryToDecimal(char binaryNum[]) {
    int length = strlen(binaryNum);
    int decimalNum = 0;

    for (int i = length - 1; i >= 0; i--) {
        int digit = binaryNum[i] - '0';
        decimalNum += digit * pow(2, length - i - 1);
    }

    return decimalNum;
}

int octalToDecimal(char octalNum[]) {
    int length = strlen(octalNum);
    int decimalNum = 0;

    for (int i = length - 1; i >= 0; i--) {
        int digit = octalNum[i] - '0';
        decimalNum += digit * pow(8, length - i - 1);
    }

    return decimalNum;
}

int hexToDecimal(char hexNum[]) {
    int length = strlen(hexNum);
    int decimalNum = 0;

    for (int i = length - 1, j = 0; i >= 0; i--, j++) {
        int digit;
        if (hexNum[i] >= '0' && hexNum[i] <= '9') {
            digit = hexNum[i] - '0';
        } else if (hexNum[i] >= 'A' && hexNum[i] <= 'F') {
            digit = hexNum[i] - 'A' + 10;
        } else if (hexNum[i] >= 'a' && hexNum[i] <= 'f') {
            digit = hexNum[i] - 'a' + 10;
        }
        decimalNum += digit * pow(16, j);
    }

    return decimalNum;
}

int main() {
    char number[100];
    int choice;
    int decimalNum;

    printf("Enter a number: ");
    scanf("%s", number);

    printf("Conversion options:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Octal to Decimal\n");
    printf("3. Hexadecimal to Decimal\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            decimalNum = binaryToDecimal(number);
            printf("Decimal representation: %d\n", decimalNum);
            break;
        case 2:
            decimalNum = octalToDecimal(number);
            printf("Decimal representation: %d\n", decimalNum);
            break;
        case 3:
            decimalNum = hexToDecimal(number);
            printf("Decimal representation: %d\n", decimalNum);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
