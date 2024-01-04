#include <stdio.h>

int main(void) {
  char str[] = "hello world";
  int counter = 0;

  for (int i = 0; str[i] != '\0'; i++) {
    counter++;
  }

  printf("text: %s length: %d\n", str, counter);
  return 0;
}