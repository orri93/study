#include <stdio.h>

main()
{
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\t')
      printf(">>>");
    else if (c == '\b')
      printf("<<<");
    else 
      putchar(c);
  }
}

