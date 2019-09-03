
/*
    Revise concepts of GNL
    |||OPEN|||
    prototype -> int    open(const char *path, int oflag, ...); 
    - The file name specified by path is opened for reading and/or writing, as specified
     by the argument oflag; the file descriptor is returned to the calling process.
    - The oflag argument may indicate that the file is to be created if it does not
     exist (by specifying the O_CREAT flag).  In this case, open() and openat() require
     an additional argument mode_t mode; the file is created with mode mode as
     described in chmod(2) and modified by the process' umask value (see umask(2)). 
     
    - returns -1 on failure and sets relevant errno
    - else returns a int (fd)
    
    |||READ|||
    prototype ->    ssize_t   read(int fildes, void *buf, size_t nbyte);
    - Reads nbytes of data an object referenced by the fd into a buffer
    - return -> no. of bytes read
             -> 0 @ EOF
             -> -1 on error and set errno
*/
# include <fcntl.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int     main(int ac, char **av)
{
    int     fd;
    char    *str;
    int i = 0;

    if (ac > 1)
    {
        str = (char*)malloc(sizeof(char) * strlen(av[2]));
        fd = open(av[1], O_CREAT);
        while (av[2][i++])
        {
            write(fd, &av[2][i], sizeof(str + 1));
        }
        close(fd);
    }
}