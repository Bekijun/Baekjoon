#include <stdio.h>
#include <string.h>

int main() {
    int h, m, s;
    int count = 0; //가능한 경우의 수 Max는 6임

    scanf("%d:%d:%d", &h,&m,&s);
    int time[3] = {h, m, s};

	for (int i = 0; i < 3; i++) {
		if (time[i] > 59) { //모두 0일 때
			count = 0;
			break;
		}
		if (time[i] > 0 && time[i] <= 12) count++;
	}
    printf("%d", count * 2);
	return 0;

    //모두 시분초 -> 6
    //하나만 시가 아닐 경우 -> 4
    //두 개가 시가 아닐 경우 -> 2
    //시가 아닐 경우는 00이 들어왔을 때
}