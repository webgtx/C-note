#include <stdio.h>
#include <stdbool.h>
/*
    If you needed cheatsheet with UNIX or GIT commands
    you can visit this repository github.com/webgtx/unixs
*/
int main() {
    int arr[] = {1, -1, 45, -3, 81};
    for(int i = 0; i < 5; i++)
        printf("%d\n", arr[i]);

    int min = arr[0];
    int max = arr[2];
    for(int i = 0; i < 5; i++) {
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > max)
            max = arr[i];
    }
    printf("\nMin Number: %d\n", min);
    printf("Max Number: %d\n", max);

    printf("Good Luck! \n");
    return 0;
}