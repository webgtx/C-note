#include <stdio.h>
#include <stdbool.h>
/*
    If you needed cheatsheet with UNIX or GIT commands
    you can visit this repository github.com/webgtx/unixs
*/
int main() {
    for(int i = 0; i <= 10; i++) 
        printf("Result: %d \n", i);

    bool rootLog = false;
    int x = 0;
    while(rootLog == false) {
        printf("\nWrite your password\n");
        scanf("%d", &x);
        if(x == 47) {
            rootLog = true;
            printf("\nDone\n");
        }
        else
            printf("Incorrect\n");
    }
    
    int a = 0;
    do {
        printf("Yo wasup\n");
    } while(a == 3);

    for(x = 0; x < 10; x++) {
        // if (x == 3)
        //     break;

        if(x % 2 == 0)
            continue;

        printf("%d \n", x);
    }
    
    return 0;
}