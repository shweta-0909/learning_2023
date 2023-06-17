//Diff between even & odd indexed elements

#include <stdio.h>

int main() {
    int size, i;
    int evenSum = 0, oddSum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
        
        
        if (i % 2 == 0) {
            evenSum += array[i]; 
        } else {
            oddSum += array[i];  
        }
    }

    int diff = evenSum - oddSum;

    printf("Sum of even-indexed elements: %d\n", evenSum);
    printf("Sum of odd-indexed elements: %d\n", oddSum);
    printf("Difference between even-indexed and odd-indexed elements: %d\n", diff);

    return 0;
}
