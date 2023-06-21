//complex number

#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

Complex readComplex();
void writeComplex(Complex complexNum);
Complex addComplex(Complex num1, Complex num2);
Complex multiplyComplex(Complex num1, Complex num2);

int main() {
    Complex complex1, complex2, sum, product;

    printf("Enter the first complex number\n");
    complex1 = readComplex();

    printf("Enter the second complex number\n");
    complex2 = readComplex();

    printf("\nComplex number 1: ");
    writeComplex(complex1);
    printf("Complex number 2: ");
    writeComplex(complex2);

    sum = addComplex(complex1, complex2);
    printf("\nSum of the two complex numbers: ");
    writeComplex(sum);

    product = multiplyComplex(complex1, complex2);
    printf("Product of the two complex numbers: ");
    writeComplex(product);

    return 0;
}

Complex readComplex() {
    Complex complexNum;
    printf("Enter the real part: ");
    scanf("%f", &complexNum.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &complexNum.imag);
    return complexNum;
}

void writeComplex(Complex complexNum) {
    printf("%.2f + %.2fi\n", complexNum.real, complexNum.imag);
}

Complex addComplex(Complex num1, Complex num2) {
    Complex sum;
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;
    return sum;
}

Complex multiplyComplex(Complex num1, Complex num2) {
    Complex product;
    product.real = num1.real * num2.real - num1.imag * num2.imag;
    product.imag = num1.real * num2.imag + num1.imag * num2.real;
    return product;
}
