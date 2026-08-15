#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  // Flush after every printf
  setbuf(stdout, NULL);
  while (1)
  {
  // TODO: Uncomment the code below to pass the first stage
  printf("$ ");

  char com[1024];
  scanf("%s",com);
  if(strcmp(com,"exit")) break;
  printf("%s: command not found\r\n", com);
  }

  return 0;
}
