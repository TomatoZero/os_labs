#include "sys/wait.h"
#include "stdio.h"
#include "unistd.h"

int main()
{
    int pid1 = fork();
    if(pid1 == 0){
        int pid2 = fork();
        if(pid2 == 0){
            sleep(1000);
        }
        else
            sleep(1000);
    }

    int pid4 = fork();
    if(pid4 == 0){
        int pid5 = fork();
        if(pid5 == 0){
            sleep(1000);
            return 0;
        }
        else
        {
            int pid6 = fork();
            if(pid6 == 0)
                sleep(1000);
            else
                sleep(1000);
        }
    }

    int pid7 = fork();
    if(pid7 == 0)
        sleep(1000);
    else
        sleep(1000);
    
    return 0;
}