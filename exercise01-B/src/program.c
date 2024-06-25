/* Exercise 01-B: Fixed Totals */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    size_t line_size = 0;
    char *line = NULL;

    while (getline(&line, &line_size, stdin) != -1) {
        int series_length = atoi(line);
        if (series_length == 0)
            break;

        int sum = 0;
        for (int i = 0; i < series_length; i++) {
            if (getline(&line, &line_size, stdin) != -1) {
                sum += atoi(line);
            }
        }

        printf("%d\n", sum);
    }

    free(line);

    return 0;
}
