#include <stdio.h>
#include <stdbool.h>
/*
    If you needed cheatsheet with UNIX or GIT commands
    you can visit this repository github.com/webgtx/unixs
*/
int main() {
  int num = 1;
  int * pNum = &num;
  printf("%p \n", &pNum);
  printf("%d \n", *pNum);
  *pNum = 5;
  printf("%d \n", *pNum);
  return 0;
}