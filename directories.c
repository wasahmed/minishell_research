
/* revision of concepts learnt in ft_ls

    |||OPENDIR|||
    DIR*    opendir(const char *filename);
    - opens the directory named by filename and associated a 
    directory stream it and returns a pointer to be used to identify
    the directory stream
    
    |||CLOSEDIR|||
    int     closedir (DIR *dirp);
    - closes the named directory stream

    |||READDIR|||
    struct dirent *   readdir(DIR *dirp);
    - Returns a pointer to the next directory entry.  It
     returns NULL upon reaching the end of the directory or on error.
*/
#include <dirent.h>
#include <stdio.h>
// basic ls unsorted
int     main(int ac, char**av)
{
    DIR                 *dirstream;
    struct dirent       *dir;
    
    if (ac == 2)
    {
        dirstream = opendir(av[1]);
        while ((dir = readdir(dirstream)) != NULL)
        {
            if (dir->d_name[0] != '.')
                printf("%s\n", dir->d_name);
        }
        closedir(dirstream);
    }
}