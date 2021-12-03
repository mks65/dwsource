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
  shmd = shmget(KEY, 0, 0);
  printf("shmd: %d\n", shmd);
  /* Remove the segment (happens once) - shmctl */
  shmctl(shmd, IPC_RMID, 0);
  return 0;
}
