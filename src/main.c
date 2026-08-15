#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  // Flush after every printf
  setbuf(stdout, NULL);

  // TODO: Uncomment the code below to pass the first stage
  printf("$ ");

  char com[1024];
  fgets(com,sizeof(com),stdin);
  com[strcspn(com, "\n")] = '\0';
  printf("%s: command not found\r\n", com);


  return 0;
}
