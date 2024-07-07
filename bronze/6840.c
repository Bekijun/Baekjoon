#include <stdio.h>
int main() {
    int arr[3];
    int blank;
    
    for(int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                blank = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = blank;
            }
        }
    }
    printf("%d", arr[1]);
    return 0;
}