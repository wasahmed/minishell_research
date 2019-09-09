
#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
    int i = 1;
    if (!strcmp(av[i], "echo") && strcmp(av[2], "-n") != 0)
    {
        while (i != ac - 1)
            printf("%s\n ",av[++i]);
    }
    else
    {
        if (!strcmp(av[i], "echo") && strcmp(av[2], "-n") == 0)
        {
            i = 2;
            while (i != ac - 1)
                printf("%s ", av[++i]);    
        }
    }
    return 0; 
}