/* Ryan Geary

   */

#include <stdio.h>

int main(int argc, char* argv[]) {
  int x;
  int c;
  FILE* input_file = fopen("input.txt", "r");;
  while((c = fgetc(input_file)) != EOF) {
    ungetc(c, input_file);
    fscanf(input_file, "%d", &x);
    printf("%c", (x + 13) % 26 + 64);
    c = fgetc(input_file);
    if (c == ' ') {
      printf("%c", c);
    }
  }
  printf("\n");
  return 0;
}
