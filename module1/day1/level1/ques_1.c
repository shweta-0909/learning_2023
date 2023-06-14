#include<stdio.h>
#include<conio.h>
int findLargeNum(int, int);
int main()
{
    int num1, num2, larg;
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);
    larg = findLargeNum(num1, num2);
    printf("Largest = %d", larg);
    getch();
    return 0;
}
int findLargeNum(int a, int b)
{
    if(a<b)
        return b;
    else
        return a;
}