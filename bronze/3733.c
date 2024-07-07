#include <stdio.h>
int main() {
    int n;
    int s;

    while(scanf("%d %d", &n, &s) != EOF) {
        printf("%d\n", s / (n + 1));
    }
    return 0;
}