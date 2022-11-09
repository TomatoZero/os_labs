#include "sys/wait.h"
#include "stdio.h"
#include "unistd.h"

int main(int argc, char *argv[]) {

    int pid = fork();
    if (pid == 0) {
        char *array[] = {argv[1], argv[2], argv[3]};
        execvp(array[0], array);
    } else {
        int stat = 1;
        waitpid(pid, &stat, 0);

        if(stat > 0)
            printf("Failed, exit code = %d\n", stat);
        else
            printf("Success\n");
    }
    return 0;
}



