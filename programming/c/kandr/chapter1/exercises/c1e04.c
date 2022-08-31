#include <stdio.h>

main() /* Fahrenheit-Celsius table */
{
  int c;

  printf("   C      F\n");
  for (c = 0; c <= 300; c = c + 20)
    printf("%4d %6.1f\n", c, (9.0/5.0) * (c + (5.0/9.0) * 32.0));
}
