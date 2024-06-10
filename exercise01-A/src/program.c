/* Exercise 01-A: Line Totals */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    size_t line_size = 0;
    char *line = NULL;

    while (getline(&line, &line_size, stdin) != -1) {
        int sum = 0;
        char *word;

        while ((word = strsep(&line, " ")) != NULL) {
            sum += atoi(word);
        }

        printf("%d\n", sum);
    }

    return 0;
}
