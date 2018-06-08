#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024
#define ALLOC_SIZE (100 * 1024 * 1024)

static char command[BUFFER_SIZE];
static char file_contents[BUFFER_SIZE];
static char overwrite_data[] = "HELLO";

int main(int argc, char const *argv[])
{
  pid_t pid;
  pid = getpid();
  sprintf(command, BUFFER_SIZE, "cat /proc/%d/maps", pid);

  puts("** memory map before mapping file **");
  fflush(stdout);
  system(command);

  int fd;
  fd = open("testfile", O_RDWR);
  

  return 0;
}
