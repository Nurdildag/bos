#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main(void)
{
  int n = 3800;
  int pid = fork();
  for (int i = 0; i < n; i++){
	 if(pid != 0){
	 	pid = fork();
	 }
  }
  if (pid == 0) {
  	sleep(2);
  } else if (pid > 0) {
 	 printf("Дочерних процессов: %d.\n", n);
  	 wait(0);
  }
  return 0;
}
