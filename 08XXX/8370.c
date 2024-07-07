#include <stdio.h>
int main() {
    int n[2];
    int k[2];
    int cal[2];
    for(int i = 0; i < 2; i++) {
        scanf("%d", &n[i]);
        scanf("%d", &k[i]);
        cal[0] = n[0] * k[0];
        cal[1] = n[1] * k[1];
    }
    printf("%d", cal[0] + cal[1]);
}