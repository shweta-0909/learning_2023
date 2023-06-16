//total number of bits set

#include <stdio.h>
#include <string.h>
 
#include <stdio.h>

int countSetBits(int num)
{
    int count = 0;
    
    while (num != 0)
    {
        count += num & 1;  // Check the rightmost bit of num
        
        num >>= 1;   // Right shift num by 1 bit
    }
    
    return count;
}

int getTotalSetBits(int arr[], int size)
{
    int totalBits = 0;
    
    for (int i = 0; i < size; i++)
    {
        totalBits += countSetBits(arr[i]);
    }
    
    return totalBits;
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
    
    int totalSetBits = getTotalSetBits(arr, size);
    
    printf("Total number of set bits in the array: %d\n", totalSetBits);
    
    return 0;
}
