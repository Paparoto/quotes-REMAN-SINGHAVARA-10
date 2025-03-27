#include "quotes.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char path[256];
    printf("Path :");
    scanf("%s", path);
    FILE *f = fopen(path, "r");
    if (!f) {
        printf("Failed to open quotes.txt\n");
        return 1;
    }
    char buffer[MAX_LENGTH];
    char *quotes[MAX_QUOTES];
    int count = 0;

    while (count < MAX_QUOTES && fgets(buffer, MAX_LENGTH, f)) {
        buffer[strcspn(buffer, "\n")] = 0;
        quotes[count] = strdup(buffer);
        count++;
    }
    fclose(f);

    printf("Loaded %d quotes.\n", count);

    for (int i = 0; i < count; i++) {
        printf("Quote %d: %s\n", i, quotes[i]);
    }

    if (count > 0) {
        srand(time(NULL));
        print_random_quote(quotes, count);
    } else {
        printf("No quotes available.\n");
    }

    for (int i = 0; i < count; i++) {
        free(quotes[i]);
    }

    return 0;
}
