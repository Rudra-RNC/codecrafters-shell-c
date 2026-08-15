#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // Flush after every printf
  setbuf(stdout, NULL);

  // TODO: Uncomment the code below to pass the first stage
  printf("$ ");

  char com[1024];
  fgets(com,sizeof(com),stdin);
  printf("%s: command not found\r\n", com);


  return 0;
}
