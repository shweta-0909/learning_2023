#include <stdio.h>


    void main()
    {
 
        int array[5];
        int i;
        int sum=0;
        printf("enter the element of an array \n");
        for (i = 0; i < 5 ; i++)
            scanf("%d", &array[i]);
 
        printf("Alternate elements of a given array \n");
        for (i = 0; i < 5; i += 2)
            printf( "%d\n", array[i]) ;

        sum = sum + array[i];
        printf("Sum of the array = %d\n",sum);
    }