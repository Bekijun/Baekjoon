#include <stdio.h>
int main() {
    int n;
    int x, y;
    int sum = 0;

    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        sum = x + y;
        printf("%d\n", sum);
    }
}