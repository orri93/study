#include <stdio.h>
#include <ctype.h>

main()
{
  int i, j, c, wc;
  int hist[32];

  wc = 0;

  for (i = 0; i < 32; ++i)
    hist[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (wc > 0 && wc <= 32)
        ++hist[wc-1];
      wc = 0;
    } else if (isalnum(c))
      ++wc;
  }

  for (i = 0; i < 32; ++i) {
    printf("%2d: ", i + 1);
    for (j = 0; j < hist[i]; j++)
      printf("*");
    printf("\n");
  }
}

