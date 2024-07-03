#include <stdio.h>
int main() {
    int first, last;
    while(1) {
        scanf("%d %d", &first, &last);

        if(first == 0 && last == 0) break;
        else if(first > last) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}