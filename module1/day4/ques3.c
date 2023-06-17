// reverse an array

#include <stdio.h>

void reverseArray(int array[], int size) {
    int start = 0;
    int end = size - 1;
    int temp;

    while (start < end) {
        
        temp = array[start];
        array[start] = array[end];
        array[end] = temp;

    
        start++;

    
        end--;
    }
}

int main() {
    int size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    reverseArray(array, size);

    printf("Reversed array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
