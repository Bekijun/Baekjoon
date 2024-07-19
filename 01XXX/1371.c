#include <stdio.h>

int main() {
    char c;
    int alpha[26] = {0, }, max = 0;
    while(scanf("%c", &c) != EOF) if(c >= 'a' && c <= 'z') alpha[c - 'a']++;
    for(int i=0; i<26; i++) if(alpha[i] > max) max = alpha[i];
    for(int i=0; i<26; i++) if(alpha[i] == max) printf("%c", 'a' + i);
}