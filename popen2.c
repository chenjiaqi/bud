#include <stdio.h>
#include <unistd.h>
#include "popen2.h"

void popen2(const char *cmdstr,FILE ** istream,FILE ** ostream)
{
    int pfdin[2];
    int pfdout[2];

    pid_t pid;

    if(pipe(pfdin) < 0)
    {
        printf("pipe in create error\n");
        return;
    }
    if(pipe(pfdout) < 0)
    {
        printf("pipe out create error");
        return;
    }

    pid = fork();

    if(pid < 0)
    {
        printf("fork error!\n");
    }

    else if(0 == pid) // child 
    {
        printf("child\n");
        char buff[200] = {0,};
        if(pfdout[1] != STDOUT_FILENO)
        {
            dup2(pfdout[1],STDOUT_FILENO);
            close(pfdout[1]);
        }
        if(pfdin[0] != STDIN_FILENO)
        {
            dup2(pfdin[0],STDIN_FILENO);
            close(pfdin[0]);
        }
        close(pfdin[1]);
        close(pfdout[0]);

        execl("/bin/bash","bash","-c",cmdstr,(char *)0);

    }
    else //parent
    {
        close(pfdin[0]);
        close(pfdout[1]);
        printf("parent\n");
        *istream = fdopen(pfdin[1],"w");
        *ostream = fdopen(pfdout[0],"r");
    }
}