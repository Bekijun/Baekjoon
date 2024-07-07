#include <stdio.h>
#include <string.h>

int main() {
    char input[1002];
    char guess[1002];
    scanf("%s", input);
    scanf("%s", guess);

    if(strlen(input) < strlen(guess)) {
        printf("no");
    }
    else printf("go");

    return 0;
}