#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trim(char *s)
{
  int i = 0, j = 0;
  while (s[i] == ' ')
    i++;
  while (s[j++] = s[i++])
    ;
}

int main(int argc, char *argv[])
{
  setbuf(stdout, NULL);
  while (1)
  {
    printf("$ ");

    char com[1024];
    fgets(com, 1024, stdin);
    com[strlen(com) - 1] = '\0';
    if (strncmp(com, "exit",4) == 0)
    {
      break;
    }
    else if (!strncmp(com, "echo",5))
    {
      printf("%s\n", com + 5);
    }
    else if (!strncmp(com, "type", 5))
    {
      printf("In Type");
      if (!strcmp(com + 5, "echo") || !strcmp(com + 5, "exit") || !strcmp(com + 5, "type"))
        printf("%s is a shell builtin\n", com + 5);
      else
        printf("%s: command not found\n", com + 5);
    }
    else 
    {
      printf("%s: command not found\r\n", com);
    }
  }

  return 0;
}
