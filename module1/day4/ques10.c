//convert string as integer

#include <stdio.h>
#include <string.h>

int stringToInt(char* str) {
    int result = 0;
    int sign = 1;
    int i = 0;

    
    if (str[0] == '-') {
        sign = -1;
        i = 1;
    }

    
    for (; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + (str[i] - '0');
        } else {
            
            printf("Error: Invalid character '%c' found\n", str[i]);
            return 0;
        }
    }

    return sign * result;
}

int main() {
    char str[100];

    printf("Enter a number as a string: ");
    fgets(str, sizeof(str), stdin);

    
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    int number = stringToInt(str);

    printf("Converted integer: %d\n", number);

    return 0;
}
