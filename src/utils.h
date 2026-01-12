#ifndef UTILS_H
#define UTILS_H

#include <libavformat/avformat.h>

void cleanUP(AVFormatContext *fmtCTX, AVCodecContext *codecCTX);
void path_handle(const char *path);

void verr(const char *fmt, va_list ap);
void warn(const char *fmt, ...);
void die(const char *fmt, ...);

#endif
