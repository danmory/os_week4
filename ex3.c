#include <stdlib.h>
#include <stdio.h>

int main(){
    char command[256];
    printf("SHELL. To exit type 'Q' \n");
    while (1) {
        scanf("%s", command);
        if (command[0] == 'Q'){
            break;
        }
        system(command);
    }
    return 0;
}