#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, q;
    scanf("%d %d", &n, &q);

    int **seq = malloc(n * sizeof(int *));
    int *size = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        seq[i] = NULL;
        size[i] = 0;
    }

    int lastAnswer = 0;

    for (int i = 0; i < q; i++) {
        int type, x, y;
        scanf("%d %d %d", &type, &x, &y);

        int index = (x ^ lastAnswer) % n;

        if (type == 1) {
            size[index]++;

            seq[index] = realloc(
                seq[index],
                size[index] * sizeof(int)
            );

            seq[index][size[index] - 1] = y;
        }
        else if (type == 2) {
            int position = y % size[index];

            lastAnswer = seq[index][position];

            printf("%d\n", lastAnswer);
        }
    }

    for (int i = 0; i < n; i++) {
        free(seq[i]);
    }

    free(seq);
    free(size);

    return 0;
}