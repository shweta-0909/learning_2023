//Decimal to Binary/Octal/Hex Conversion

#include <stdio.h>

void decimalToBinary(int decimalNum) {
    int binaryNum[32];
    int i = 0;

    while (decimalNum > 0) {
        binaryNum[i] = decimalNum % 2;
        decimalNum = decimalNum / 2;
        i++;
    }

    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");
}

void decimalToOctal(int decimalNum) {
    int octalNum[100];
    int i = 0;

    while (decimalNum > 0) {
        octalNum[i] = decimalNum % 8;
        decimalNum = decimalNum / 8;
        i++;
    }

    printf("Octal representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octalNum[j]);
    }
    printf("\n");
}

void decimalToHexadecimal(int decimalNum) {
    char hexNum[100];
    int i = 0;

    while (decimalNum > 0) {
        int rem = decimalNum % 16;
        if (rem < 10) {
            hexNum[i] = rem + '0';
        } else {
            hexNum[i] = rem - 10 + 'A';
        }
        decimalNum = decimalNum / 16;
        i++;
    }

    printf("Hexadecimal representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexNum[j]);
    }
    printf("\n");
}

int main() {
    int decimalNum;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    decimalToBinary(decimalNum);
    decimalToOctal(decimalNum);
    decimalToHexadecimal(decimalNum);

    return 0;
}
