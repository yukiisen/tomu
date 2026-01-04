#ifndef CONTROL_H
#define CONTROL_H

#include "backend.h"

void help();
void *control_place(void *arg);
void playback_pause(PlayBackState *state);
void playback_resume(PlayBackState *state);
void playback_stop(PlayBackState *state);
void shuffle(const char *path);

#endif
