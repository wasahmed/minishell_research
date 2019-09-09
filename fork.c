
/*
    fork() causes creation of a new process.  The new process (child process) is an
     exact copy of the calling process (parent process) except for the following:

           o   The child process has a unique process ID.

           o   The child process has a different parent process ID (i.e., the process ID
               of the parent process).

           o   The child process has its own copy of the parent's descriptors.  These
               descriptors reference the same underlying objects, so that, for instance,
               file pointers in file objects are shared between the child and the parent,
               so that an lseek(2) on a descriptor in the child process can affect a sub-
               sequent read or write by the parent.  This descriptor copying is also used
               by the shell to establish standard input and output for newly created pro-
               cesses as well as to set up pipes.

           o   The child processes resource utilizations are set to 0; see setrlimit(2)
*/
#include <unistd.h>
#include <stdio.h>
/* the number of prints is equal to the number of processes created */
int     main()
{
    printf("why once?\n");
    /* splits 1 into 2*/
    fork();
    /* splits 2 into 4*/
    fork();
    /* splits 4 into 8*/
    fork();
    printf("why eight?\n");
    return (0);
}