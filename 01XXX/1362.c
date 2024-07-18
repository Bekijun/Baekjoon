#include <stdio.h>
int main() {
    float o, w, n; //실제 체중, 적정 체중, 얼마큼 +-
    char c; //E, F 여부
    int isRIP; //죽음 여부
    
    for(int i = 1; ; i++) {
        isRIP = 0;
        scanf("%f %f", &o, &w);
        if(o == 0 && w == 0) return 0;

        while(1) {
            scanf("%c %f", &c, &n);
            if(c == '#' && n == 0) {
                printf("%d ", i); //시나리오 출력
                if(isRIP) printf("RIP\n"); //죽었다면
                else if(w > 0.5 * o && w < 2 * o) printf(":-)\n"); //행복한 상태
                else printf(":-(\n"); //이외 상태
                break;
            }
            else if(c == 'E') {
                if (w - n <= 0) isRIP = 1; //만약 살아 있고 몸무게가 0 이상이라면
                w -= n;
            }
            else if(c == 'F') w += n;
        }
    }
}