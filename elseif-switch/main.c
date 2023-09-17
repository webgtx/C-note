#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
    If you needed cheatsheet with UNIX or GIT commands
    you can visit this repository github.com/webgtx/unixs
*/


// Example usage
int main() {
    int a = 2, b = 10;
    if (a == b) {
    } else if (a <= b) {
      puts("b greater than a or equal");
    } else {
      puts("any else conditions");
    }

// '||' and '&&'
    if (a != b && a > b) {
      puts("not equal and greater");
    }

    if (a < b || a == b) {
      puts("less or equal");
    }

// Ternary operators 
    int x = 90;
    a = 8;
    int res = x < a ? (x + a) : (x - a);
    printf("%d\n", res);


// Switch Contsturction 
    x = 23;
    switch (x) { // Match variable 
        case 1: // if x equals 1 
            printf("x == 1\n");
            break; // End of block 
        case 56: 
            printf("x == 56\n");
            break; 
        default:
            printf("Что-то другое\n");
            break; // You can skip break statment on the last case 
    }
    return 0;
}
