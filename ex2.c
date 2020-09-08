#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    for (int i = 0; i < 5; ++i) {
        fork();
        sleep(5);
    }
    return 0;
}

/* If we call fork in a loop 3 times
 * then there are 2^3 = 8 processes created
 * (each process after the fork divided into the 2 processes);
 * if we call fork in a loop 5 times
 * then there are 2^5 = 32 processes created
 * */