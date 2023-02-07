#include <stdio.h>
#include <string.h>

void reverse(char str[], int length) {
    int start = 0;
    int end = length -1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

char* decode(int num) {
    static char str[6];
    int i = 0;
    while (num > 0) {
        str[i++] = (num % 10) + 'A' - 1;
        num = num / 10;
    }
    str[i] = '\0';
    reverse(str, strlen(str));
    return str;
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int num;
        scanf("%d", &num);
        printf("%s\n", decode(num));
    }
    return 0;
}