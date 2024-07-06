#include <stdio.h>
int main() {
    int sum = 0;
    int num;
    for(int i = 0; i < 5; i++) {
        scanf("%d", &num);
        sum += num;
    }
    printf("%d\n", sum);
}