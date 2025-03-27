#ifndef QUOTES_H
#define QUOTES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUOTES 10
#define MAX_LENGTH 256

void print_quote(char ** quotes, int index);
void print_random_quote(char ** quotes, int count);

#endif
