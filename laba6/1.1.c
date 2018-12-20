#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  char **p;
  int count = 0;
  for (p = environ; *p != NULL; p++) /* перебор всех элементов массива */
    count++;
  printf("Number of environment variables: %d\n", count);
}

//printenv | wc -l
