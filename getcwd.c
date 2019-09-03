
/*
    |||GETCWD|||result is the same as pwd
    char *getcwd(char *buf, size_t size);
    The getcwd() function copies the absolute pathname of the current working
    directory into the memory referenced by buf and returns a pointer to buf.
    The size argument is the size, in bytes, of the array referenced by buf.

    If buf is NULL, space is allocated as necessary to store the pathname and
    size is ignored.  This space may later be free(3)'d.
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int     main()
{
    char    cwd[1000];

    //cwd = (char*)malloc(sizeof(char) * 1000);
    printf("%s", getcwd(cwd, sizeof(cwd)));
    return (0);
}
