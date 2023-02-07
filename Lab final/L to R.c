#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num == 1) {
        return false;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int l, r;
        scanf("%d%d", &l, &r);
        for (int j = l; j <= r; j++) {
            if (is_prime(j)) {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    return 0;
}