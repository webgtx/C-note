#include "headers/func.h"
/*
    If you needed cheatsheet with UNIX or GIT commands
    you can visit this repository github.com/webgtx/unixs
*/

void calc(int a, int b);
void string(char arr[]);
float calcFloat(float a, float b);

int main() {
    info();
    calc(2, 2);
    
    char words[] = {'h', 'e', 'y'};
    string(words);
    string("Hello there!");

    float result = calcFloat(2.3, 2.2);
    printf("Result: %.1f\n", result);

    return 0;
}

void calc(int a, int b) {
    int res = a + b;
    printf("Result: %d\n", res);
}

void string(char arr[]) {
    printf("%s\n", arr);
}

float calcFloat(float a, float b) {
    float res = a + b;
    return res;
}

// # Moved to the header
// void info() {
//     printf("Somthing\n");
// }