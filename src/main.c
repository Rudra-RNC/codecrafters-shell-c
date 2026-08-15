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

    char inp[1024];
    fgets(inp, 1024, stdin);
    inp[strlen(inp) - 1] = '\0';
    char *com=strtok(inp," ");
    char *ans=strtok(NULL,"");
    if (strcmp(com, "exit") == 0)
    {
      break;
    }
    else if (!strcmp(com, "echo"))
    {
      printf("%s\n", ans);
    }
    else if (strcmp(com, "type")==0)
    {
      printf("In Type");
      if (!strcmp(ans, "echo") || !strcmp(ans, "exit") || !strcmp(ans, "type"))
        printf("%s is a shell builtin\n", ans);
      else
        printf("%s: command not found\n", ans);
    }
    else 
    {
      printf("%s: command not found\r\n", com);
    }
  }

  return 0;
}
