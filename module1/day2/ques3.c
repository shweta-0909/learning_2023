// sum of alternate arrays

#include <stdio.h>

int sumAlternateElements(int arr[], int size)
{
    int sum = 0;
    
    for (int i = 0; i < size; i += 2)
    {
        sum += arr[i];
    }
    
    return sum;
}

int main()
{
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int sum = sumAlternateElements(arr, size);
    
    printf("Sum of alternate elements: %d\n", sum);
    
    return 0;
}
