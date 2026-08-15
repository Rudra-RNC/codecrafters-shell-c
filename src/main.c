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
  printf("$ ");

  char com[1024];
  fgets(com,1024,stdin);
  com[strlen(com)-1]='\0';
  if(strcmp(com,"exit")==0) break;
  else if(!strcmp(com,"echo")) printf("%s\n",com+5);
  else if (strcmp(com,"type")==0)
  {
    if(!strcmp(com+4,"echo") || !strcmp(com+4,"exit") || !strcmp(com+4,"type")) printf("%s is a shell builtin",com+4);
    else printf("%s: command not found",com+4);
  } else printf("%s: command not found\r\n", com);

  return 0;
}
