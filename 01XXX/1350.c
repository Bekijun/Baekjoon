#include <stdio.h>

int main() {
    int n, size[1001], cluster;
    long long int count = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &size[i]);
    }
    scanf("%d", &cluster);

    for(int i = 0; i < n; i++) {
        if(size[i] % cluster == 0) count += size[i] / cluster;
        else count += size[i] / cluster + 1;
        //파일의 크기가 클리스터 n개의 크기를 초과했을 경우에만 n+1
    }
    printf("%lld", count*(long long int)cluster);
    //결과값 -> int가 아니라 long long
}