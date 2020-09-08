#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
    int n = 10;
    int parentId = getpid();
    fork();
    /* if the current PID is equal to initial PID, then it is parent process*/
    if (getpid() == parentId) {
        printf("Hello from parent [%d - %d]\t", getpid(), n);
    }
    /* else it is a child process */
    else {
        printf("Hello from child [%d - %d]\n", getpid(), n);
    }
    return 0;
}