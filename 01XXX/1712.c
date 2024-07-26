#include <stdio.h>
int main() {
    int A, B, C; //고정, 가변, 판매 비용
    scanf("%d %d %d", &A, &B, &C);

    if(C - B <= 0) printf("-1");
    else printf("%d", (A / (C - B)) + 1);

    return 0;
}