#include <stdio.h>
#include <string.h>
#include <libgen.h>

#include "control.h"
#include "utils.h"

#define PROG_NAME "tomu"
#define PROG_VER "0.0.7"

int main(int argc, char *argv[]){
  if (argc < 2 ){
    printf("Usage: %s [FILE]\n", PROG_NAME);
    return 0;
  }

  const char *command = argv[1];
  const char *filename = argv[argc - 1];

  // first check about an arg options "--"
  if ( (argv[1][0] == '-') && (argv[1][1] == '-') )

    if (strcmp("--loop", command) == 0 )
      while (1) path_handle(filename);

    else if (strcmp("--shuffle-loop", command) == 0 )
      while (1) shuffle(filename);

    else if (strcmp("--help", command) == 0 )
      help();

    else if (strcmp("--version", command) == 0 )
      printf("%s\n", PROG_VER);

    else {
      printf("[T] unknown command '%s'\n", command);
      return 1;
    }

  else 
    path_handle(filename);

  return 0;
}
