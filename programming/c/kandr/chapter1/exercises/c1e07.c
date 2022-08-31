#include <stdio.h>

main()
{
  int c, bc;

  bc = 0;
  while ((c = getchar()) != EOF) {
    if (bc == 0) {
      if (c != ' ') {
        putchar(c);
      } else {
        bc++;
      }
    } else {
      if (c == ' ') {
        bc++;
      } else {
        putchar(' ');
        putchar(c);
        bc = 0;
      }
    }
  }
}

