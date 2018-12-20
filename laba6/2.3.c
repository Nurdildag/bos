#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main(void)
{
  int pid = fork();
  for (int i = 0; i < 9; i++){
	 if(pid != 0){
	 	pid = fork();
	 }
  }
  if (pid == 0) {
  	 printf("Это сообщение из дочернего процесса:%d.\nИдентификатор родительского: %d\n", getpid(), getppid());
	sleep(5);
  } else if (pid > 0) {
 	 printf("Это сообщение из родительского процесса: %d.\n",getpid());
  	 wait(0);
  }
  return 0;
}
