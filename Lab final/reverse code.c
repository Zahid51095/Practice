#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  int t, n, i, j, len;
  char str[100];
  scanf("%d", &t);

  while (t--) {
    scanf("%d", &n);
    sprintf(str, "%d", n);
    len = strlen(str);

    for (i = len - 1; i >= 0; i--) {
      printf("%c", str[i] - '0' + 'A' - 1);
    }
    printf("\n");
  }

  return 0;
}