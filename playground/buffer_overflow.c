#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(unsigned argc, char **argv) {
   char buffer[3];
   strcpy(buffer, argv[1]);
   puts(buffer);
}