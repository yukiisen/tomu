#include "backend.h"
#include "control_playback.h"
#include <stdio.h>
#include <string.h>

#define PROG_VER "0.0.3"

int main(int argc, char *argv[]){
  if (argc < 2 ){
    printf("Usage: %s [FILE]\n", argv[0]);
    return 0;
  }

  const char *command = argv[1];
  const char *filename = argv[argc - 1];

  if (strcmp("loop", command) == 0 ){
    while (1){
      scan_now(filename);
    }
  } else if (strcmp("shuffle-loop", command) == 0){
    shuffle(filename);

  } else if (strcmp("version", command) == 0 ){
    printf("%s\n", PROG_VER);

  } else if (strcmp("help", command) == 0){
    help();

  } else{
    scan_now(filename);
  }

  return 0;
}
