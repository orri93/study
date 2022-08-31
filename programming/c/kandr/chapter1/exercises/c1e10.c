#include <stdio.h>

#define YES 1
#define NO  0

main()
{
  int c, inword;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t')
      putchar('\n');
    else
      putchar(c);
  }
}

