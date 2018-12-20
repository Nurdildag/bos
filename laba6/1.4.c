#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  char **p = environ;
  int limit;
  sscanf(argv[1], "%d", &limit);
  for (int i = 0; (*(p+i) != NULL)&&(i < limit); i++)
    printf("%s\n", *(p+i));
}
