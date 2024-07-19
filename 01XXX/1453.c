#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int arr[101] = {0, };
    int x;
    int de = 0;
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &x);
        if(arr[x] == 1) de++;
        else arr[x] = 1;
    }

    printf("%d\n", de);
}