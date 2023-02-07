#include <stdio.h>
#include <string.h>

void rvrs(char * str, char * reversed_str, unsigned len) {
    str += len - 1; 
    while (str[0]) {
        *reversed_str = str[0];
        str -= 1;
        reversed_str++;
    }
}

int main(unsigned argc, char **argv) {
    // printf("%c\nlen: %d\n", argv[1][1], strlen(argv[1]));
    char * reversed_string;
    rvrs(argv[1], reversed_string, strlen(argv[1]));
    puts(reversed_string);
}
