#include <stdio.h>
#include <stdlib.h>

#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>

#define KEY 24601

int main() {

  int shmd;
  int *data;
  /* Create the segment (happens once) - shmget */
  /* Access the segment (happens once per process) - shmget */
  shmd = shmget(KEY, sizeof(int), IPC_CREAT | 0600);
  printf("shmd: %d\n", shmd);

  /* Attach the segment to a variable (once per process) */
  data = shmat(shmd, 0, 0);

  *data = 98;
  printf("data: %d\n", *data);

  /* Detach the segment from a variable (once per process) - shmdt */
  shmdt(data);
    printf("data: %d\n", *data);
  /* Remove the segment (happens once) - shmctl */

  return 0;
}
