#include <stdio.h>
#include <stdbool.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        int n, s;
        scanf("%d", &n);
        int arr[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }
        scanf("%d", &s);
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (arr[j] == s) {
                printf("Case %d: %d\n", i, j + 1);
                found = true;
                break;
            }
        }
        if (!found) {
            printf("Case %d: Not Found\n", i);
        }
    }
    return 0;
}