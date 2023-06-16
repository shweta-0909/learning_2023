 //find both smallest and largest digits in given n numbers

 #include <stdio.h>

void findSmallestLargestDigits(int n)
{
    int smallest = 9;  
    int largest = 0;   
    
    while (n != 0)
    {
        int digit = n % 10;  
        
        if (digit < smallest)
            smallest = digit;  
        
        if (digit > largest)
            largest = digit;   
        
        n /= 10;   
    }
    
    printf("Smallest digit: %d\n", smallest);
    printf("Largest digit: %d\n", largest);
}

int main()
{
    int count, number, i;
    
    printf("Enter the count of numbers: ");
    scanf("%d", &count);
    
    printf("Enter the numbers:\n");
    for (i = 0; i < count; i++)
    {
        scanf("%d", &number);
        findSmallestLargestDigits(number);
    }
    
    return 0;
}