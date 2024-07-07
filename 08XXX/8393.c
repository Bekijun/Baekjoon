#include <stdio.h>
int main() {
    int n;
    int add = 0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        add += i;
    }

    printf("%d", add);
}