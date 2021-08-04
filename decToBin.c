#include <stdio.h>

void decToBin(int n)
{
  int quo;
  int rem[8];
  int bitCount = 8; // number of bits

  for(int i = 0; i < bitCount; i++)
  {
    quo = n / 2;
    rem[bitCount-1-i] = n % 2; // stores the integers in reverse
    n = quo;
  }

  for(int i = 0; i < bitCount; i++)
  {
    printf("%d",rem[i]);
  }
}

int main()
{
  // gives output for any num, depending on bitCount
  decToBin(155); // prints 10011011
}
