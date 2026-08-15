#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  // Flush after every printf
  setbuf(stdout, NULL);
  while (true)
  {
  // TODO: Uncomment the code below to pass the first stage
  printf("$ ");

  char com[1024];
  scanf("%s",com);
  if(com=="exit") break;
  printf("%s: command not found\r\n", com);
  }

  return 0;
}
