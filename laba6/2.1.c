#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main(void)
{
  int pid = fork();
  if (pid == 0) {
  	 printf("Это сообщение из дочернего процесса:%d.\nИдентификатор родительского: %d\n", getpid(), getppid());
  } else if (pid > 0) {
   	 printf("Это сообщение из родительского процесса: %d.\nИдентификатор дочернего процесса:  %d\n", getpid(), pid);
  	 wait(0);
  }
  return 0;
}
