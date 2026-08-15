#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trim(char *s){
  int i=0,j=0;
  while(s[i]==' ') i++;
  while(s[j++]=s[i++]);
}

int main(int argc, char *argv[]) {
  // Flush after every printf
  setbuf(stdout, NULL);
  while (1)
  {
  // TODO: Uncomment the code below to pass the first stage
  printf("$ ");

  char com[1024];
  scanf("%s",com);
  if(!strcmp(com,"exit")) break;
  if(!strcmp(com,"echo")){
    char output[1024];
    fgets(output,sizeof(output),stdin);
    trim(output);
    printf("%s",output);
    continue;
  }
  printf("%s: command not found\r\n", com);
  }

  return 0;
}
