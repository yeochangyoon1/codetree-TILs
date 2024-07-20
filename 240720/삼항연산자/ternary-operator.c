#include <stdio.h>
#include <string.h>

int main() {
    int score;
    scanf("%d", &score);
    char s[100];
    strcpy(s, (score == 100) ? "pass" : "failure");
    printf("%s", s);
    return 0;
}