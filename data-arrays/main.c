#include <stdio.h>
#include <stdbool.h>
/*
    If you needed cheatsheet with UNIX or GIT commands
    you can visit this repository github.com/webgtx/unixs
*/
int main() {
// Arrays
    int arr[3] = {0, 1, 2};
    arr[1] = 11;
    printf("Result: %d \n", arr[1]);

    float num[3];
    // num[0] = 5.2f;
    num[1] = 5.2f;
    num[2] = 5.2f;
    printf("Result: %.2f \n", num[2]);

// String
    char word[] = {'H', 'e', 'y'};
    char words[] = "Hello there!";
    words[1] = '3';
    words[8] = '3';
    words[10] = '3';
    printf("Result: %s \n", words);
    printf("Result: %c \n", words[0]);

// Matrix
    int matrix[3][3] = {
        {1, 0, 1},
        {1, 1, 0},
        {0, 1, 0},
    };
    printf("Result: %d \n", matrix[1][2]);

    return 0;
}