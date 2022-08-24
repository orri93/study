#include <stdio.h>

main() /* count blanks, tabs and newlines */
{
  int c, bc, tc, nc;
  bc = 0;
  tc = 0;
  nc = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++bc;
    if (c == '\t')
      ++tc;
    if (c == '\n')
      ++nc;
  }
  printf("%d %d %d\n", bc, tc, nc);
}
