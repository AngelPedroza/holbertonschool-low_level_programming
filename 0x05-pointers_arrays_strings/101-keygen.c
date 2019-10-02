#include <stdio.h>

unsigned long checksum(char* s)
{
  unsigned long sum = 0;
  while (*s != 0)
    {
      sum += *s;
      s++;
    }
  return (sum);
}
int main(int argc, char argv[])
{
  unsigned long sum;
  if (argc < 2)
    
}
