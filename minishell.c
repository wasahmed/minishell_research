
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

void    prompt_user()
{
    int     clearscreen = 1;
    
    if (clearscreen)
    {
        printf("%s", "\e[1;1H\e[2J");
        clearscreen = 0;
    }
    printf(">");
}

int     main(int ac, char **av)
{
//    char cmd[100];
  //  char command[100];
    //char *params[20];
    //char *envp[] = {(char*) "PATH=/bin", 0};

    while (1)
    {
        prompt_user();
      //  evaluate_cmd(command, params);
        if (fork())
            wait(NULL);
        //else
        //{
          //  strcpy(cmd, "/bin/");
            //strcat(cmd, command);
            //execve(cmd, params, envp); 
        //}
        if (strcmp(av[1], "exit") == 0)
        break;
    }
}