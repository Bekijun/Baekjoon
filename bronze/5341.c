#include <stdio.h>

int main() {
    int num;
    int sum;
    while(1) {
        sum = 0;
        scanf("%d", &num);
        if(num == 0) {
            return 0;
        }
        for(int i = 1; i <= num; i++) {
            sum += i;
        }
        printf("%d\n", sum);
    }
    return 0;
}