# include <stdio.h>
# include <unistd.h>
/*  prototype -> int   access(const char *path, int mode);

    checks the availability of the file named by path argument for access
    permissions indicated by the mode argument.

    mode :  R_OK -read permissions;
            W_OK -write permissions;
            X_OK -execute permissions;
            F_OK -exists?
    
    return 0 on success & -1 on failure and sets relevant erno
*/
int     main(int ac, char **av)
{
    if (ac == 2)
    {
        if (access(av[1], R_OK) == 0)
            printf("%s\n", "read permissions");
        if (access(av[1], W_OK) == 0)
            printf("%s\n", "write permissions");
        if (access(av[1], X_OK) == 0)
            printf("%s\n", "execute permissions");
        if (access(av[1], F_OK) == 0)
            printf("%s\n", "file exists");
        else
            printf("file does not exist");
    }
    return (0);
}