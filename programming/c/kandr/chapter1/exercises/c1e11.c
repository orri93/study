#include <stdio.h>
#include <ctype.h>

#define YES 1
#define NO  0

main() /* count words exercise 1-11 */
{
  int c, wc, inword;

  wc = 0;
  inword = NO;
  while((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      inword = NO;
    } else if (inword == NO && isalnum(c)) {
      inword = YES;
      ++wc;
    } 
  }
  printf("Word count: %d\n", wc);
}

