//exponent part of double variable

#include <stdio.h>

void printExponent(double num)
{
    unsigned long long exponent;
    unsigned int hexExponent;

    
    memcpy(&exponent, &num, sizeof(exponent));

    
    exponent >>= 52;

    
    exponent &= 0x7FF;

    
    hexExponent = (unsigned int)exponent;

   
    printf("Exponent (Hex): 0x%03X\n", hexExponent);

   
    printf("Exponent (Binary): ");
    for (int i = 11; i >= 0; i--)
    {
        int bit = (hexExponent >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main()
{
    double num;

    printf("Enter a double number: ");
    scanf("%lf", &num);

    printExponent(num);

    return 0;
}
