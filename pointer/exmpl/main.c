#include <stdio.h>
#include <stdbool.h>
/*
    If you needed cheatsheet with UNIX or GIT commands
    you can visit this repository github.com/webgtx/unixs
*/

struct Abstract {
  int width, height;
};

void calc(struct Abstract *obj);

int main() {
  struct Abstract square = {5, 7};
  calc(&square);
  return 0;
}

void calc(struct Abstract *obj) {
  int res = obj->height * obj->width;
  printf("Result: %d \n", res);
}