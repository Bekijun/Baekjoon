#include <stdio.h>
int main() {
    int arrchess[7] = {1, 1, 2, 2, 2, 8};
    int input = 0;

    for(int i = 0; i < 6; i++) {
        scanf("%d", &input);
        printf("%d ", arrchess[i] - input);
    }

    return 0;
}