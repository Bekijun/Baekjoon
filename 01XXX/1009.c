#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        int task = 1;

        for(int j = 0; j < b; j++) {
            task *= a;
            task %= 10;
        }
        
        if(task == 0) printf("10\n");
        else printf("%d\n", task);
    }
}