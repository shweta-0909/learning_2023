#include <stdio.h>
#include <string.h>
 
int countSetBits(unsigned int n)
{
  unsigned int c;
  for (c = 0; n; n >>= 1)
  {
    c += n & 1;
  }
  return c;
}
 
int main(void)
{
  unsigned int n;
  printf("Enter a positive integer: ");
  scanf("%u", &n);
  printf("%d\n", countSetBits(n));
}