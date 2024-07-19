#include <stdio.h>
int main() {
    int arr_N[101];
    int arr_Q[1001];
    int n, q;
    scanf("%d %d", &n, &q);

    for(int i = 0; i < n; i++) scanf("%d", &arr_N[i]);
    for(int j = 0; j < q; j++) scanf("%d", &arr_Q[j]);
    for(int j = 0; j < q; j++) {
        int sum = -1;
        int temp = arr_Q[j];
        for(int i = 0; i < n; i++) {
            sum = sum + arr_N[i];
            if(sum >= temp) {
                printf("%d\n", i + 1);
                break;
            }
        }
    }
 }