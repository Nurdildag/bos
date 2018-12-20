#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  char **p;
  int count = 0;
  for (p = environ; *p != NULL; p++) /* перебор всех элементов массива */
    count++;
  printf("Number of environment variables: %d\n", count);
  count = 0;
  for(int j = 0; j < argc; j++)
    count++;
  printf("Number of command line variables: %d\n", count);
}

