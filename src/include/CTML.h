#ifndef _CTML_H
#define _CTML_H 1

#include "CTML.c"

int compile(FILE *, FILE *);
void noSpace(char *, int *);
char *exTag(char *, size_t, size_t);

#endif
