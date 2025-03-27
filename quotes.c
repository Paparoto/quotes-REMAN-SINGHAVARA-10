#include "quotes.h"
#include <time.h>

void print_quote(char **quotes, int index) {
    printf("Quote: %s\n", quotes[index]);
}

void print_random_quote(char **quotes, int count) {
    int index = rand() % count;
    printf("Random index selected: %d\n", index);
    print_quote(quotes, index);
}
