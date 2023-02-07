#include <stdio.h>
#include <stdlib.h>

void difference_of_arrays(int n, int *a, int *b) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (b[i] < b[j]) {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d ", a[i] - b[i]);
    }
}

int main() {
    int n, i;
    scanf("%d", &n);
    int a[n], b[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    difference_of_arrays(n, a, b);
    return 0;
}