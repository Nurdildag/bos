#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  char **p = environ;
  for (int i = 0; (*(p+i) != NULL)&&(i < 10); i++) 
    printf("%s\n", *(p+i));
}
