#ifndef UTILS_H
#define UTILS_H

#include <libavformat/avformat.h>

void cleanUP(AVFormatContext *fmtCTX, AVCodecContext *codecCTX);
int shinu_now(const char *msg, AVFormatContext *fmtCTX, AVCodecContext *codecCTX);

int get_sec(double value);
int get_min(double value);
int get_hour(double value);

void verr(const char *fmt, va_list ap);
void warn(const char *fmt, ...);
void die(const char *fmt, ...);

#endif
