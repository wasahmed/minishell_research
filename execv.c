
 /*
    int    execve(const char *path, char *const argv[], char *const envp[]);
    
    execve() transforms the calling process into a new process.  The new process is constructed from an ordinary 
    file, whose name is pointed to by path, called the new process file.  This file is either an exe-
    cutable object file, or a file of data for an interpreter.
*/
#include <unistd.h>
int main()
{
    char *av[2];
    av[0] = "/bin/sh";
    av[1] = NULL;
    execve(av[0], av, NULL);
    return (0);
}